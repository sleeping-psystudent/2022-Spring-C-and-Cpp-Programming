#include <stdio.h>

int main(void) {
	int arr[5];
	for(int i=0;i<5;i++){
		scanf("%d", &arr[i]);
	}
	for(int j=0;j<5;j++){
		printf("%d\t", arr[j]);
		for(int k=0;k<arr[j];k++){
			printf("%c", '*');
		}
		printf("\n");
	}
	return 0;
}
