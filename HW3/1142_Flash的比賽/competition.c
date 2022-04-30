#include "competition.h"

void competition(int *a,int n){
    int temp;
    if(n%2==0){
        for(int i=0;i<(n/2);i++){
            temp=a[i];
            a[i]=a[n-i-1];
            a[n-i-1]=temp;
        }
    }
    else{
        for(int i=0;i<=(n-1)/2;i++){
            temp=a[i];
            a[i]=a[n-i-1];
            a[n-i-1]=temp;
        }
    }
}
