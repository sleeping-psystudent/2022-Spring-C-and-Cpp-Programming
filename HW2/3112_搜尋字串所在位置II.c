#include <stdio.h>
#include <string.h>

int main(void) {
    char sen[100]={""};
    gets(sen);
    char word[100]={""};
    gets(word);
    //printf("%d", strlen(word));
    int temp[100]={0};
    int t=0;
    if(strlen(word)>1){
        for(int i=0;i<strlen(sen);i++){
            //printf("%d ", i);
            if(sen[i]==word[0]){
                int j=1, k=i+1;
                while(j!=strlen(word)){
                    //printf("%d ", j);
                    if(j==strlen(word)-1&&sen[k]==word[j]){
                        //printf("%d ", i);
                        temp[t++]=i;
                        j++;
                    }
                    else if(sen[k]==word[j]){
                        //printf("hi");
                        k++;
                        j++;
                    }
                    else break;
                }
            }
        }
    }

    else if(strlen(word)==1){
        for(int m=0;m<strlen(sen);m++){
            if(sen[m]==word[0]){
                temp[t++]=m;
            }
        }
    }

    for(int l=0;l<100;l++){
        if(temp[l]==0&&l!=0) break;
        printf("%d\t%c%c%c%s%c%c%c\n", temp[l], sen[temp[l]-2], sen[temp[l]-1], '+', word, '+', sen[strlen(word)+temp[l]], sen[strlen(word)+temp[l]+1]);
    }
	return 0;
}
