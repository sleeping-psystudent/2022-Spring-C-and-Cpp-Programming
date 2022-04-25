#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

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
/*
    int a;
    for(int j=0;j<n-1;j++){
        for(int k=0;k<n-1;k++){
            if(temp[k]>temp[k+1]){
                a=temp[k];
                temp[k]=temp[k+1];
                temp[k+1]=a;
            }
        }
    }*/

    qsort(temp, n, sizeof(int), cmp);

    for(int m=0;m<n;m++){
        printf("%d ", temp[m]);
    }
    printf("\n");
	return 0;
}
