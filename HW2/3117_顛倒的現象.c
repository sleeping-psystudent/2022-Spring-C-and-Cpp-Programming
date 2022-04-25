#include <stdio.h>
#include <string.h>

int main(void) {
	char sen[100]={""};
	while(gets(sen)){
        if(strcmp(sen, "-1")==0) break;
        for(int i=0;i<strlen(sen);i++){
            if(sen[i]=='b') sen[i]='d';
            else if(sen[i]=='d') sen[i]='b';
            else if(sen[i]=='p') sen[i]='q';
            else if(sen[i]=='q') sen[i]='p';
        }
        puts(sen);
	}
	return 0;
}
