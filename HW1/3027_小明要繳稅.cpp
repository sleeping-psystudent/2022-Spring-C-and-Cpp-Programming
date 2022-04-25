#include<iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    int J, K, L, M;

    if (N>=10310001) J=45,L=1345100;
    else if (N>=4530001) J=40,L=829600;
    else if (N>=2420001) J=30,L=376600;
    else if (N>=1210001) J=20,L=134600;
    else if (N>=540001) J=12,L=37800;
    else J=5,L=0;

    cout<<J<<"% "<<(N*J/100)<<" "<<L<<" "<<(N*J/100-L)<<" "<<endl;

}
