#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

void BubbleSort(char arr[]){

    char temp;
    for(int i=0;i<25;i++){
        for(int j=0;j<25;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(void) {
    char det;
    char len[4][26]={{0},{0},};
    int NT=0, AA=0, OA=0, RA=0;
    int a, b, c;
    char tri;
    while((tri=getchar())!=EOF){
        scanf("%d %d %d", &a, &b, &c);
        //printf("%c %d %d\n", tri, a, c);
        fflush(stdin);

        if(a+b>c && b+c>a && a+c>b){
            int max=a;
            int min_1=b, min_2=c;
            if(max<=b) min_1=a, max=b;
            if(max<=c) min_1=a, min_2=b, max=c;


            if(pow(min_1, 2)+pow(min_2, 2)>pow(max, 2)) len[1][AA++]=tri;
            else if(pow(min_1, 2)+pow(min_2, 2)<pow(max, 2)) len[2][OA++]=tri;
            else len[3][RA++]=tri;
        }
        else len[0][NT++]=tri;
    }

    //printf("%d %d %d %d\n", NT, AA, OA, RA);

    for(int j=0;j<4;j++){
        switch(j){
            case 0:
                printf("%s", "Not Triangle: ");
                break;
            case 1:
                printf("\n%s", "Acute Angle: ");
                break;
            case 2:
                printf("\n%s", "Obtuse Angle: ");
                break;
            case 3:
                printf("\n%s", "Right Angle: ");
                break;
        }
        BubbleSort(len[j]);
        int t=0, m=0;;
        for(int i=0;i<26;i++){
            if(len[j][i]<'A'||len[j][i]>'Z') t++;
            else{
                if(m==0){
                    printf("%c", len[j][i]);
                    m++;
                }
            	else printf(",%c", len[j][i]);
            }
        }
        if(t==26) printf("%s", "None");
    }
    //printf("\n");

	return 0;
}
