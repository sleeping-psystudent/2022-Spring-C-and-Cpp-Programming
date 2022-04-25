#include <stdio.h>
#include <string.h>

int main(void) {
    char c[100]={""};
    char out[100]={""};
    int j=0;
    int yn=0;
    while(gets(c)){
        if(strcmp(c, "-1")==0) break;
        if(yn!=0) out[j++]=' ';
        for(int i=0;i<strlen(c);i++){
            if('a'<=c[i]&&c[i]<='z'){
                if('a'<=c[i]-3&&c[i]-3<='z') out[j++]=c[i]-3;
                else out[j++]=c[i]+23;
            }
            else if('A'<=c[i]&&c[i]<='Z'){
                out[j++]=c[i]+29;
            }
            else{
                out[j++]=c[i];
            }
        }
        yn=1;
    }

    for(int a=0;a<j;a++){
        printf("%c", out[a]);
    }
}
