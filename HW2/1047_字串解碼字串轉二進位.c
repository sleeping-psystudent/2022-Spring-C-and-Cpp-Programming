#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    int i=0;
    while((ch=getchar())!='-'){
        if(ch=='\n'){
            printf(",\n");
            i=0;
            continue;
        }
        //else if(ch==' ') continue;
        else if(i!=0) printf(",");

        int temp=(int)ch;
        int store[7];
        for(int n=0;n<7;n++) store[n]=2;

        int j=0;
        while(temp>0){
            store[j]=temp%2;
            //printf("%d", store[j]);
            j++;
            temp/=2;

        }

        if(store[6]==2) store[6]=0;
        for(int m=6;m>=0;m--){
            printf("%d", store[m]);
        }
        i++;
    }
    return 0;
}
