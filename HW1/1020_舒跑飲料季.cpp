#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
    int x;
    cin>>x;
    int c;
    int s;
    c = x;
    s = x;
    while(c > 2){
        if (c ==3)
            c++;
        s = s + c / 4;
        c = c % 4 + c/4;
    }
    cout<<s<<endl;
}
