#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char filename[10];
    scanf("%s", &filename);

    FILE *in;
    in=fopen(filename, "r");
    int num;
    fscanf(in, "%d", &num);
    int temp;
    int sum=0;
    for(int i=0;i<num;i++){
        fscanf(in, "%d", &temp);
        if(temp>120) continue;
        else if(temp>=30){
            sum+=(temp+20);
        }
        else{
            sum+=(temp+5);
        }
    }
    fclose(in);
    printf("%d minutes\n", sum);
}
