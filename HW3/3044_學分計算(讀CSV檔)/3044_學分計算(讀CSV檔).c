#include <stdio.h>
#include <string.h>

struct report{
    char CourseName[50];
    char Category[3];
    int Credits;
    char Grade[3];
};

int main(){
    struct report people;
    char filename[10];
    scanf("%s", &filename);

    FILE *in;
    in=fopen(filename, "r");

    char row[80]={""};
    int i=0;
    int r=0, e=0;
    while(1){
        if(fgets(row, 80, in)!=NULL){
            //printf("%s\n", row);
            if(i==0){
                i++;
                continue;
            }
            char *token=strtok(row, ",");
            //printf("%s\n", token);
            strcpy(people.CourseName, token);
            //printf("%s\n", people.CourseName);
            strcpy(people.Category, strtok(NULL, ","));
            //printf("%s ", people.Category);
            people.Credits=atoi(strtok(NULL, ","));
            //printf("%d ", people.Credits);
            strcpy(people.Grade, strtok(NULL, "\r\n"));
            //printf("%s", people.Grade);

            if(strcmp(people.Grade, "F")==0) continue;
            else {
                if(strcmp(people.Category, "R\0")==0){
                    r+=people.Credits;
                    //printf("%d ", people.Credits);
                }
                else{
                    e+=people.Credits;
                    //printf("%d ", people.Credits);
                }
            }
        }
        else break;
    }
    fclose(in);

    printf("Required: %d\nElective: %d\n", r, e);
    if(r<72&&e<28) printf("%c\n%s%d%s%d%s", 'N', "Student still needs to complete ", 72-r, " required credits & ", 28-e, " elective credits for graduation.");
    else if(r<72) printf("%c\n%s%d%s", 'N', "Student still needs to complete ", 72-r, " required credits for graduation.");
    else if(e<28) printf("%c\n%s%d%s", 'N', "Student still needs to complete ", 28-e, " elective credits for graduation.");
    else printf("%c", 'Y');
}
