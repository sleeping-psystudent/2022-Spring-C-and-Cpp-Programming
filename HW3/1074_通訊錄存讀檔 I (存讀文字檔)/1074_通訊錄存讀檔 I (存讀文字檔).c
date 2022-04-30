#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct address{
    char name[80];
    char phone[20];
    char email[80];
};

int main(){
    int i=0;
    struct address person[50];
    while(1){
        FILE *in, *out;
        char order;
        char filename[80];
        scanf("%c", &order);
        switch (order){
            case 'i':
                scanf("%s", &person[i].name);
                scanf("%s", &person[i].phone);
                scanf("%s", &person[i].email);
                i++;
                break;
            case 'l':
                if(i==0) printf("%s\n", "No data.");
                else{
                    for(int j=0;j<i;j++){
                        printf("#%d\n", j+1);
                        printf("Name: %s\n", person[j].name);
                        printf("Phone: %s\n", person[j].phone);
                        printf("Email: %s\n", person[j].email);
                    }
                }
                break;
            case 's':
                scanf("%s", &filename);
                in=fopen(filename, "w");
                fprintf(in, "%d\n", i);
                for(int j=0;j<i;j++){
                    fprintf(in, "%s\t", person[j].name);
                    fprintf(in, "%s\t", person[j].phone);
                    fprintf(in, "%s\n", person[j].email);
                }
                fclose(in);
                break;
            case 'o':
                scanf("%s", &filename);
                out=fopen(filename, "r");
                fscanf(out, "%d", &i);
                for(int j=0;j<i;j++){
                    fscanf(out, "%s", &person[j].name);
                    fscanf(out, "%s", &person[j].phone);
                    fscanf(out, "%s", &person[j].email);
                }
                fclose(out);
                break;
            case 'c':
                for(int j=0;j<i;j++){
                    strcpy(person[j].name, "");
                    strcpy(person[j].phone, "");
                    strcpy(person[j].email, "");
                }
                i=0;
                break;
            case 'q':
                goto endofpro;
                break;
        }
    }

    endofpro:
        return 0;
}
