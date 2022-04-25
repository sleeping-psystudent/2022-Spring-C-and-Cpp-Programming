#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main(void) {
    char te[3];
	gets(te);
	int num=atoi(te);

	char sen[12800];
	gets(sen);
	//sen[strlen(sen)-1]=0;
	char ser[100][128]={""};
	char* token=strtok(sen, " ");
	for(int i=0;i<num;i++){
		strcpy(ser[i], token);
		token=strtok(NULL, " ");
	}

	//printf("%d", num);
	char temp[1280];
	for(int m=0;m<num-1;m++){
        for(int n=0;n<num-1;n++){
            if(strcmp(ser[n], ser[n+1])>0){
                strcpy(temp, ser[n]);
                strcpy(ser[n], ser[n+1]);
                strcpy(ser[n+1], temp);
            }
        }
	}

    for(int c=0; c<num;c++) printf("%s ", ser[c]);
	return 0;
}
