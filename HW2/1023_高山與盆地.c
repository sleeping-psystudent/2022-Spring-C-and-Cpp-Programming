#include <stdio.h>
#include <stdlib.h>
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

	//for(int j=0;j<n;j++) printf("%d ", num[j]);

	int max=0;
	int min=0;
	for(int j=0;j<n;j++){
        if(num[j]>num[max]) max=j;
        if(num[j]<num[min]) min=j;
	}
	printf("%d %d\n", max+1, num[max]);
	printf("%d %d\n", min+1, num[min]);
	return 0;
}
