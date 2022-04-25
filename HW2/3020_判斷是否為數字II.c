#include <stdio.h>
#include <string.h>

int main(void) {
    int i=0;
    char st[100]={""};
	while(i!=1){
        gets(st);
        fflush(stdin);
        for(int j=0; j<strlen(st);j++){
            if(isdigit(st[j])){
                printf("n=%s", st);
                return 0;
            }
            else{
                printf("%s\n", "is not a number");
                break;
            }
        }
	}
}
