#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int *temp;
    temp=(int*)malloc(sizeof(int)*n);
    fflush(stdin);

    int i=0;
    char c;
    while((c=getchar())!=EOF){
        if(isdigit(c)){
            ungetc(c, stdin);
            scanf("%d", &temp[i++]);
        }
    }

    int a;
    for(int j=0;j<n-1;j+=2){
        a=temp[j];
        temp[j]=temp[j+1];
        temp[j+1]=a;
    }

    for(int k=0;k<n;k++){
        printf("%d ", temp[k]);
    }
    printf("\n");
    return 0;
}
