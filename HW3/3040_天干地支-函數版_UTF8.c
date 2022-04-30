#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void YEAR(int *y);

int main(){
    int year[20];
    for(int k=0;k<20;k++) year[k]=0;
    int i=0;
    while(1){
        char in[5]={""};
        scanf("%s", &in);
        //printf("%s\n", in);
        if(strcmp(in, "q")==0) break;
        year[i++]=atoi(in);
        //printf("%d\n", year[i-1]);
    }
    //for(int k=0;k<20;k++) printf("%d\n", year[k]);
    YEAR(year);
}

void YEAR(int *y){
    for(int i=0;i<20;i++){
        if(y[i]==0) continue;
        printf("%d = ", y[i]);
        int sky = (y[i]-3)%10;
        switch(sky){
            case 1:
                printf("%s", "甲");
                break;
            case 2:
                printf("%s", "乙");
                break;
            case 3:
                printf("%s", "丙");
                break;
            case 4:
                printf("%s", "丁");
                break;
            case 5:
                printf("%s", "戊");
                break;
            case 6:
                printf("%s", "己");
                break;
            case 7:
                printf("%s", "庚");
                break;
            case 8:
                printf("%s", "辛");
                break;
            case 9:
                printf("%s", "壬");
                break;
            case 0:
                printf("%s", "癸");
                break;
        }
        int ground = (y[i]-3)%12;
        switch(ground){
            case 1:
                printf("%s年\n", "子");
                break;
            case 2:
                printf("%s年\n", "丑");
                break;
            case 3:
                printf("%s年\n", "寅");
                break;
            case 4:
                printf("%s年\n", "卯");
                break;
            case 5:
                printf("%s年\n", "辰");
                break;
            case 6:
                printf("%s年\n", "巳");
                break;
            case 7:
                printf("%s年\n", "午");
                break;
            case 8:
                printf("%s年\n", "未");
                break;
            case 9:
                printf("%s年\n", "申");
                break;
            case 10:
                printf("%s年\n", "酉");
                break;
            case 11:
                printf("%s年\n", "戌");
                break;
            case 0:
                printf("%s年\n", "亥");
                break;
        }

    }
}
