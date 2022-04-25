#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i=n;i<=m;i++){
        if (i%7==0){
            if(i+7<=m) cout<<i<<" & ";
            else cout<<i<<endl;
        }
    }

    int c=0;
    for(int j=n;j<=m;j++){
        int k=j/10;
        int l=k/10;
        if (j%10==7){
            if (c==0){
                cout<<j;
                c++;
            }
            else cout<<" & "<<j;
        }
        else if(k%10==7){
            if (c==0){
                cout<<j;
                c++;
            }
            else cout<<" & "<<j;
        }
        else if(l%10==7){
            if (c==0){
                cout<<j;
                c++;
            }
            else cout<<" & "<<j;
        }
    }
    cout<<endl;
}
