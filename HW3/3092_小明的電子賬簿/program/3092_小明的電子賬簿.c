#include <stdio.h>
#include <string.h>

struct chef{
    char name[10];
    int payment;
};

int main(){
    struct chef people[20];

    char s[128];
    scanf("%s",s);

    int len=strlen(s)+strlen("../app/")+1;
    char concated[len];
    memset(concated, '\0', len);
    strcat(concated, "../app/");
    strcat(concated, s);

    FILE *in;
    in = fopen(concated, "r");
    int i=0, sum=0;
    while(1){
        if(fscanf(in, "%s", &people[i].name)!=EOF){
            //printf("%s", people[i].name);
            fscanf(in, "%d", &people[i].payment);
            sum+=people[i].payment;
            i++;
        }
        else break;
    }
    fclose(in);

    for(int j=0;j<i;j++){
        printf("chef %s %d\n", people[j].name, people[j].payment);
    }
    printf("Total: %d\nAvg: %.2lf", sum, (double)sum/i);
}
