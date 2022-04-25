#include<iostream>

using namespace std;

int main(){
    int i=0;
    char x, re='0';
    cin>>x;
    while(x!='q'){
        if(x=='9' && re=='1') i++;
        re=x;
        cin>>x;
    }
    cout<<i<<endl;
}
