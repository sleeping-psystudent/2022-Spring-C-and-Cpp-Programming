#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int num;
    scanf("%d", &num);
    char filename[10]={""};
    scanf("%s", &filename);

    FILE *in;
    in=fopen(filename, "r");
    int i=1;
    char temp[15]={""};
    while(fscanf(in, "%s", temp)!=EOF){
        if(i%num==0){
            i++;
            continue;
        }
        else{
            printf("%s ", temp);
            i++;
        }
    }
}
