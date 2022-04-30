#include <stdio.h>
#include "fill_array.h"

void fill_array(int *ptr[], int n){
    for(int i=0;i<n;i++){
        //printf("%d ", ptr[i]);
        *ptr[i]=i;
    }
    //printf("%d %d\n", *(ptr)+1, ptr[n-1]);

    int c=1, o=0;
    int font=0, back=0;
    while(*(ptr)+c!=ptr[n-1]+1){
        if(*(*(ptr)+c)!=0){
            back=*(*(ptr)+c);
            for(int j=o+1;j<c;j++){
                *(*(ptr)+j)=(font+back);
                //printf("%d \n", *(*(ptr)+j));
            }
            font=back;
            o=c;
        }
        c++;
    }
}
