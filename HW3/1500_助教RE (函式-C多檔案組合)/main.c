#include <stdio.h>
#include <stdlib.h>

#include "bag.h"

int main() {
    int i,n,k;
    int *a;
    //n=���v�n�R���F�� k=�I�]���e�q
    scanf("%d%d",&n,&k);
    a = (int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){scanf("%d",&a[i]);}
    ans(n,k,a);//�i�Jans �禡
    free(a);
    return 0;
}
