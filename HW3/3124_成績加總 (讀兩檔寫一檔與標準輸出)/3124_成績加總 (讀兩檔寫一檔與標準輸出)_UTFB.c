#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct data{
    char name[10];
    int score;
};

int main(){
    struct data people;

    FILE *eng, *math, *tol;
    eng=fopen("./english_list.csv", "r");
    math=fopen("./math_list.csv", "r");
    tol=fopen("./Score.csv", "w");

    int sum=0, i=0;
    char row_e[20]={""};
    char row_m[20]={""};
    while(1){
        if(fscanf(eng, "%s", &row_e)!=EOF&&fscanf(math, "%s", &row_m)!=EOF){
            if(i==0){
                //printf("%s", row_m);
                i=1;
                continue;
            }
            else{
                char *token_e=strtok(row_e, ",");
                strcpy(people.name, token_e);
                people.score=atoi(strtok(NULL, ","));
                //printf("%s %d\n", people.name, people.score);
                sum+=people.score;

                //fscanf(math, "%s", &row_m);
                char *token_m=strtok(row_m, ",");
                strcpy(people.name, token_m);
                people.score=atoi(strtok(NULL, ","));
                //printf("%s %d\n", people.name, people.score);
                sum+=people.score;

                fprintf(tol, "%s,", people.name);
                fprintf(tol, "%d,\n", sum);
                printf("%s %d\n", people.name, sum);
                sum=0;
            }
        }
        else break;
    }
    fclose(eng);
    fclose(math);
    fclose(tol);
}
