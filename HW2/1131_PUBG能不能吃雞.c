#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
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
    if(n%2==0) a=(n/2)-1;
    else a=(n-1)/2;

    if(m>temp[a]) printf("%d\nWINNER WINNER CHICKEN DINNER!\n", temp[a]);
    else printf("%d\nBETTER LUCK NEXT TIME!\n", temp[a]);


    free(temp);
	return 0;
}
