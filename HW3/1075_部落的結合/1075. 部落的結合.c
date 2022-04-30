#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int people[1000];
    char tribe1[128]={""};
    char tribe2[128]={""};
    scanf("%s",&tribe1);
    scanf("%s",&tribe2);

    int len=strlen(tribe1)+strlen("../app/")+1;
    char concated[len];
    memset(concated, '\0', len);
    strcat(concated, "../app/");
    strcat(concated, tribe1);

    FILE *tri1, *tri2;
    int i=0;
    int temp;
    tri1 = fopen(concated, "r");
    while(1){
        if(fscanf(tri1, "%d", &temp)>0){
            people[i]=temp;
            i++;
        }
        else break;
    }
    fclose(tri1);

    len=strlen(tribe2)+strlen("../app/")+1;
    memset(concated, '\0', len);
    strcat(concated, "../app/");
    strcat(concated, tribe2);

    //printf()
    tri2 = fopen(concated, "r");
    while(1){
        if(fscanf(tri2, "%d", &temp)>0){
            people[i]=temp;
            i++;
        }
        else break;
    }
    fclose(tri2);

    for(int j=0;j<i;j++){
        for(int k=0;k<j;k++){
            if(people[k]>people[j]){
                temp=people[k];
                people[k]=people[j];
                people[j]=temp;
            }
        }
    }

    for(int j=0;j<i;j++){
        printf("%d ", people[j]);
    }
    printf("\n");
}
