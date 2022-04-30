#include "bag.h"
#include <stdio.h>
#include <stdlib.h>
void ans(int n,int k, int *a){
    int number_of_item=0, total_weight_of_item=0;
    for(int i=n;i>0;i--){
        if(a[i-1]<=k){
            number_of_item++;
            total_weight_of_item+=a[i-1];
        }
    }
    printf("%d %d\n",number_of_item,total_weight_of_item);
}
