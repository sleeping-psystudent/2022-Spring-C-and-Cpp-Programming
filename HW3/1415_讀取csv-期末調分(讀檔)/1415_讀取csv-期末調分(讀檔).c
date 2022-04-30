#include <stdio.h>
#include <math.h>
#include <string.h>

struct data{
    int ID;
    int score;
};

int main(){
    struct data people;
    FILE *score;

    char s[128];
    scanf("%s", &s);

    int len=strlen(s)+strlen("./")+1;
    char concated[len];
    memset(concated, '\0', len);
    strcat(concated, "./");
    strcat(concated, s);

    score=fopen(concated, "r");

    int i=0;
    int record[100];
    char row[20]={""};
    while(1){
        if(fscanf(score, "%s", &row)!=EOF){
            char *token=strtok(row, ",");

            people.ID=atoi(token);
            people.score=atoi(strtok(NULL, ","));
            //printf("%d %d\n", people.ID, people.score);
            int after=sqrt(people.score)*11;
            if(after<60){
                record[i]=people.ID;
                i++;
            }
        }
        else break;
    }
    fclose(score);

    //printf("%d\n", i);
    int temp=0;
    for(int m=0;m<i-2;m++){
        for(int n=0;n<i-m-1;n++){
            if(record[n]>record[n+1]){
                temp=record[n];
                record[n]=record[n+1];
                record[n+1]=temp;
            }
        }
    }

    for(int k=1;k<i;k++){
        if(k==i-1) printf("%d", record[k]);
        else printf("%d ", record[k]);
    }
}
