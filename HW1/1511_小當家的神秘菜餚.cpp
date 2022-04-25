#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int N, X, Y;
    scanf("%d%d%d", &N, &X, &Y);
    if (N%2==0)
        cout<<(20+X*(N/2)-Y*((N/2)-1))<<endl;

    else
        cout<<(20+X*((N+1)/2)-Y*((N-1)/2))<<endl;

}
