#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int P=0, SMG=0, SHO=0, AR=0, SNI=0;
    char filename[128]={0};
    scanf("%s",&filename);
    FILE *in;
    in = fopen(filename, "r");
    char text[16]={""};
    while(fscanf(in,"%s",text) != EOF){
        char *p=strtok(text, "-");
        //printf("%s\n", p);
        if(strcmp(p, "PISTOL")==0) P++;
        else if(strcmp(p, "SMG")==0) SMG++;
        else if(strcmp(p, "SHOTGUN")==0) SHO++;
        else if(strcmp(p, "AR")==0) AR++;
        else if(strcmp(p, "SNIPER")==0) SNI++;
    }
    printf("%d %d %d %d %d", P, SMG, SHO, AR, SNI);
}
