#include<iostream>

using namespace std;

int main(){
    int m;
    cin>>m;
    for(int i=2;i<=m;i++){
        int k=0;
        for(int j=2;j<i;j++){
            if (i%j==0){
                k=1;
                break;
            }
        }
        if(k==0) cout<<i<<" is prime"<<endl;
    }
}
