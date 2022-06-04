#include "raise.h"

void raise(int performance[3], int *salary){
    int avg=0;
    int judge=0;
    for(int i=0;i<3;i++){
        avg+=performance[i];
        if(performance[i]<60) judge=1;
    }

    avg=avg/3;
    //printf("%d\n", avg);
    if(avg>=80){
        if(judge==0) *salary+=2000;
        else *salary+=1000;
    }
    else if(70<=avg&&avg<=80) *salary+=1000;
    else if(avg<60) *salary-=500;
}
