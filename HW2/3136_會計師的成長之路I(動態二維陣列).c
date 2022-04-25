#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, i, j;
    scanf("%d", &n);
    getchar();

    char **num=calloc(n, sizeof(char*));
    for(i=0;i<n;i++){
        num[i]=(char*)calloc(7, sizeof(char));
    }
/*
    for(int q=0;q<n;q++){
        for(int r=0;r<7;r++){
            printf("%ca", num[q][r]);
        }
        printf("\n");
    }*/

    char c;
    int k=0, p=0;
    while(c=getchar()){
        if(c==' '){
            k=0;
            p++;
        }
        else if(c=='\n') break;
        else if(isdigit(c)){
                ungetc(c, stdin);
                scanf("%c", &num[p][k]);
                //printf("%d %c\n", p, num[p][k]);
                k++;
        }
    }

    int index;
    scanf("%d", &index);

    for(i=0;i<n;i++){
        for(j=k-1;j>=0;j--){
            if(num[i][j]=='\0') continue;
            else printf("%c", num[i][j]);
        }
        if(i==n-1) printf("\n");
        else printf(" ");
    }

    for(i=k-1;i>=0;i--){
        printf("%c", num[index-1][i]);
    }
    printf("\n");

    for(j=0;j<n;j++){
        free(num[j]);
    }
    free(num);
	return 0;
}
