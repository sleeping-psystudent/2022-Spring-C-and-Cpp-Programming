#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	int N;
	scanf("%d", &N);
	fflush(stdin);
	int arr[N];
	int i=0;
	char con;
	while((con=getchar())!=EOF){
		if(isdigit(con)){
			ungetc(con, stdin);
			scanf("%d", &arr[i++]);
		}
	}
	if(N%2==0){
		printf("%d\n", (int)((1+arr[N/2]+arr[(N/2)-1])/2));
	}
	else{
		printf("%d\n", arr[(N-1)/2]);
	}
	return 0;
}
