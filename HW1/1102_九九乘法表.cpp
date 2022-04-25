#include<iostream>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    for (int i=1;i<=n; i++){
        for (int j=1;j<=m;j++){
            int re= j*i;
            if (re/10==0)
                cout<<i<<'*'<<j<<"= "<<re<<" ";
            else cout<<i<<'*'<<j<<"="<<re<<" ";
        }
        cout<<endl;
    }
}
