#include<iostream>

using namespace std;

int main(){
    int d;
    cin>>d;
    if (d>=95) cout<<"獎金 2000 元"<<endl;
    else if (d>=90) cout<<"獎金 1000 元"<<endl;
    else if (d>=80) cout<<"獎金 500 元"<<endl;
    else cout<<"獎金 0 元"<<endl;
}
