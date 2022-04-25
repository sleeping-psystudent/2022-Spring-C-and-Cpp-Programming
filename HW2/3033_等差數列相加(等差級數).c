#include <stdio.h>

int main(void) {
	int a, d, n;
	scanf("%d", &a);
	scanf("%d", &d);
	scanf("%d", &n);

	int sum=a;
	int total=0;
	for(int i=0;i<n;i++){
	    if(sum<0){
            if(i==n-1) printf("%c%d%c", '(', sum, ')');
            else printf("%c%d%c + ", '(', sum, ')');
	    }
	    else{
            if(i==n-1) printf("%d", sum);
            else printf("%d + ", sum);
	    }
        total+=sum;
        sum+=d;
	}
	printf(" = %d", total);
	return 0;
}
