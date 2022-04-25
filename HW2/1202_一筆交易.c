#include <stdio.h>
#include <ctype.h>

int main(void) {
    int n;
    scanf("%d", &n);
    getchar();
	int num[n];
	for(int m=0;m<n;m++) num[m]=0;

	int i=0;
	char c;
	while((c=getchar())!=EOF){
        if(isdigit(c)||c=='-'){
            ungetc(c, stdin);
            scanf("%d", &num[i++]);
        }
	}
	for(int j=n-1;j>=0;j--){
        if(j==0){
            printf("%d \n", num[j]);
            break;
        }
        printf("%d ", num[j]);
	}
	return 0;
}
