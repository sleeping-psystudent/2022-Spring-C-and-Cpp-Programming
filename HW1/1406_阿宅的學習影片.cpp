#include <iostream>
#include<stdio.h>

using namespace std;

int main(){
    int L, S;
    scanf("%d%d", &L, &S);
    int c=0;
    while(L!=S){
        if (L>S)
            S+=5;
        else if (L<S)
            S-=2;
        c++;
    }
    cout<<c<<endl;
}
