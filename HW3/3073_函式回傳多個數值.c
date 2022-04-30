#include <stdio.h>

void return2num(int n, int *factRst, int *sumRst);

int main(){
    int num;
    scanf("%d", &num);
    int Fac[num], Sum[num];
    for(int i=0;i<num;i++){
        Fac[i]=i+1;
        Sum[i]=i+1;
    }
    return2num(num, Fac, Sum);
}

void return2num(int n, int *factRst, int *sumRst){
    int F=1, S=0;
    for(int i=0;i<n;i++){
        F*=factRst[i];
        S+=sumRst[i];
    }
    printf("%d\n%d", F, S);
}
