#include <stdio.h>
#include <ctype.h>
#include <malloc.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int *temp;
    temp=(int*)malloc(sizeof(int)*n);
    fflush(stdin);

    int i=0;
    double avg=0;
    char c;
    while((c=getchar())!=EOF){
        if(isdigit(c)){
            ungetc(c, stdin);
            scanf("%d", &temp[i]);
            avg+=(double)temp[i]/n;
            i++;
        }
    }

    int k=0;
    for(int j=0;j<n;j++){
        if(temp[j]>avg) k++;
    }
    printf("%d\n", k);
	return 0;
}
