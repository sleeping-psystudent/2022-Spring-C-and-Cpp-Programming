#include "score.h"
#include <stdio.h>

void inputAry(int n, int *P){
    for(int i=0;i<n;i++){
        scanf("%d", &P[i]);
    }
    /*
    for(int i=0;i<n;i++){
        printf("%d\n", P[i]);
    }*/
}

void printAry(int n, int *P){
    printf("avg = %.2lf\nhighest:\n", Avg(n, P));
    int tem=MaxScore(n, P);
    printf("%d: %d\n", tem+1, P[tem]);
}

double Avg(int n, int *P){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=P[i];
        //printf("%d\n", sum);
    }
    return ((double)sum/n);
}
int MaxScore(int n, int *P){
    int max=0;
    for(int i=0;i<n;i++){
        if(P[i]>P[max]) max=i;
    }
    return max;
}
