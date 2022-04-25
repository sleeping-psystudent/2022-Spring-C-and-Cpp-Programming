#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char seq[100];
    while(strcmp(gets(seq),"-1")!=0){
    	for(int i=0;i<100;i++){
    		if(islower(seq[i])) seq[i]-= 32;
    		else if(seq[i]=='\0') break;
    	}
    	puts(seq);
    	fflush(stdin);
    }
	return 0;
}
