#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char c[100]={""};
    float sum=0;
	while(gets(c)){
        if(strcmp(c,"q")==0) break;
        //printf("%d", strlen(c));

        for(int i=0;i<strlen(c);i++){
            if(c[i]=='.') continue;
            else if(isdigit(c[i])==0){
                //printf("%c", c[i]);
                break;
            }
            else if(isdigit(c[i])!=0&&i==strlen(c)-1){
                float num=atof(c);
                //printf("%f", num);
                int x=(int)num;
                //printf("%d", x);
                sum+=(num-(float)x);
                //printf("%f", sum);
            }
        }
	}

	printf("%.2f", sum);
	return 0;
}
