#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n, m;
    scanf("%d%d", &n, &m);

    int man=0;
    for(int i =n;i<=m;i++){
        int x=i, y=i, c=0, s=0;
        while(x>=1){
            x/=10;
            c++;
        }
        while(y>=1){
            int z =y%10;
            y/=10;
            s+=pow(z, c);
        }
        if (s==i) man++;
    }

    int vec[man];
    int w =0;
    for(int j =n;j<=m;j++){
        int x=j, y=j, c=0, s=0;
        while(x>=1){
            x/=10;
            c++;
        }
        while(y>=1){
            int z =y%10;
            y/=10;
            s+=pow(z, c);
        }
        if (s==j){
            vec[w]=j;
            w++;
        }
    }

    if (sizeof vec==0){
        cout<<"none"<<endl;
        return 0;
    }


    for(int k=0;k<man;k++){
        if (k!=man-1)
         cout<<vec[k]<<" & ";
        else cout<<vec[k]<<endl;
    }

}
