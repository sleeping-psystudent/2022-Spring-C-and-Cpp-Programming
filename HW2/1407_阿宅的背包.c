#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    int N, K;
	scanf("%d %d", &N, &K);
	fflush(stdin);
	int man=0, sum=0;
	int n;
	char num;
	while((num=getchar())!=EOF){
        if(isdigit(num)){
            ungetc(num, stdin);
            scanf("%d", &n);
            	if(n<=K){
            		sum+=n;
                	man++;
            	}
        }
	}
	printf("%d %d\n", man, sum);
	return 0;
}
