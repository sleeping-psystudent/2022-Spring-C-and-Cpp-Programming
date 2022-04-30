#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char filename[10];
    scanf("%s", &filename);

    char wfilename[10];
    strcpy(wfilename, filename);
    wfilename[0]='w';
    //printf("%s", wfilename);

    FILE *in, *out;
    //printf("%s", filename);
    in = fopen(filename, "r");
    out = fopen(wfilename, "w");
    int sum=0, i=0;
    char temp[5]={""};
    while(fscanf(in, "%s", temp)!=EOF){
        int tempnum=atoi(temp);
        //printf("%d ", tempnum);
        fprintf(out, "%d ", tempnum);
        sum+=tempnum;
        i++;
    }
    fclose(in);

    printf("%d", sum);
    printf("\n%.2lf", (double)sum/i);
    fprintf(out, "\n%d", sum);
    fprintf(out, "\n%.2lf", (double)sum/i);
    fclose(out);
}
