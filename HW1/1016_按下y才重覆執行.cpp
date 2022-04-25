#include<iostream>

using namespace std;

int main(){
    int i=1;
    while(i!=0){
        char c;
        cin>>c;
        if (c=='y'){
            cout<<"run"<<endl;
            i=1;
        }
        else i=0;
    }
}
