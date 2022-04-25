#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    if (n%12!=0)
        cout<< (n/12) <<" dozen and "<<(n%12)<<endl;
    else
        cout<< (n/12) <<" dozen"<<endl;
}
