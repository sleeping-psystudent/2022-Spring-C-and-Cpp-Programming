#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct bookprice{
    char bookname[30];
    char price[5];
};

struct input{
    char bookname_1[30];
    char price_1[6];
};

int main(){
    char filename[15];
    char bookstore[15];
    char notename[15];
    memset(notename, '\0', 15);
    strcpy(notename, "note0");

    scanf("%s", &filename);
    scanf("%s", &bookstore);

    char num;
    for(int k=0;k<strlen(filename);k++){
        if('0'<filename[k]&&filename[k]<='9'){
            notename[5]=filename[k];
        }
    }
    strcat(notename, ".txt");

    int m;
    FILE *list, *book, *another;
    book=fopen(bookstore, "r");
    fscanf(book, "%d", &m);

    struct bookprice bprice[m];
    for(int i=0;i<m;i++){
        fscanf(book, "%s", bprice[i].bookname);
        fscanf(book, "%s", bprice[i].price);
    }
    fclose(book);

    struct input fin[m];
    int t=0;
    char name[30];
    int acc=0;
    list=fopen(filename, "r");
    while(fscanf(list, "%s", name)!=EOF){
        //printf("%s\n", name);
        strcpy(fin[t].bookname_1, name);
        strcpy(fin[t].price_1, "None");
        for(int j=0;j<m;j++){
            if(strcmp(bprice[j].bookname, name)==0){
                acc+=atoi(bprice[j].price);
                memset(fin[t].price_1, '\0', 6);
                strcpy(fin[t].price_1, bprice[j].price);
            }
        }
        t++;
    }


    char temp[30];
    char tempnum[6];
    for(int j=0;j<t-1;j++){
        for(int h=0;h<t-j-1;h++){
            //printf("%s %s\n", fin[h].bookname_1, fin[h+1].bookname_1);
            if(strcmp(fin[h].bookname_1, fin[h+1].bookname_1)>0){
                strcpy(temp, fin[h].bookname_1);
                strcpy(fin[h].bookname_1, fin[h+1].bookname_1);
                strcpy(fin[h+1].bookname_1, temp);

                strcpy(tempnum, fin[h].price_1);
                strcpy(fin[h].price_1, fin[h+1].price_1);
                strcpy(fin[h+1].price_1, tempnum);
            }
        }
    }

    another=fopen(notename, "w");
    for(int g=0;g<t;g++){
        fprintf(another, "%s ", fin[g].bookname_1);
        fprintf(another, "%s\n", fin[g].price_1);
    }
    fclose(another);
    fclose(list);
    printf("%d", acc);
}
