#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i=1; i<=n; i++){
        if (i!=n)
            cout<<i<<"+";
        else cout<<i<<" = "<<((1+n)*n)/2<<endl;
    }
}
