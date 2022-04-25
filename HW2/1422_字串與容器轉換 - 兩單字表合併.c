#include <stdio.h>
#include <string.h>

int main(void) {
	char first[100];
	char second[100];
	gets(first);
	char* f_token=strtok(first, ";");
	char sort[100][200]={""};
	int i=0;
	while(f_token!=NULL){
        //printf("%s\n", f_token);
        strcpy(sort[i], f_token);
        //printf("%s", sort[i]);
		f_token=strtok(NULL, ";");
		i++;
	}

	fflush(stdin);
	gets(second);
	char* s_token=strtok(second, ",");
	while(s_token!=NULL){
	    //printf("%s\n", s_token);
	    strcpy(sort[i], s_token);
	    //printf("%s", sort[i]);
		s_token=strtok(NULL, ",");
		i++;
	}

	char temp[100];
	for(int m=0;m<i-1;m++){
        for(int n=0;n<i-1;n++){
            if(strcmp(sort[n], sort[n+1])>0){
                strcpy(temp, sort[n]);
                strcpy(sort[n], sort[n+1]);
                strcpy(sort[n+1], temp);
            }
            else if(strcmp(sort[n], sort[n+1])==0){
                strcpy(sort[n+1], "\0");
            }
        }
	}

    int c=0;
	while(c!=i){
        if(strcmp(sort[c], "\0")==0&&c!=i-1) c++;
        else if(c!=i-1) printf("%s ", sort[c++]);
        else printf("%s\n", sort[c++]);
	}
	return 0;
}
