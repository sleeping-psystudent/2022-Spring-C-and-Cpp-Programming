#include<iostream>
#include<vector>
#include<string>
#include <sstream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int len=0;
    int x=n;
    while (x>=1){
        x/=10;
        len++;
    }

    if (n==0||len>5){
        cout<<"out of range"<<endl;
        return 0;
    }

    string num[len];
    for (int i=0; i<len;i++){
        int p=n%10;
        n/=10;
        switch (p){
            case 1:
                num[i]="壹";
                break;
            case 2:
                num[i]="貳";
                break;
            case 3:
                num[i]="參";
                break;
            case 4:
                num[i]="肆";
                break;
            case 5:
                num[i]="伍";
                break;
            case 6:
                num[i]="陸";
                break;
            case 7:
                num[i]="柒";
                break;
            case 8:
                num[i]="捌";
                break;
            case 9:
                num[i]="玖";
                break;
            case 0:
                num[i]="零";
                break;

        }
    }
    for (int j=len-1; j>=0;j--){
        if (num[j]=="零") continue;
        else
            switch (j){
            case 4:
                cout<<num[4]<<"萬";
                break;
            case 3:
                cout<<num[3]<<"仟";
                break;
            case 2:
                cout<<num[2]<<"佰";
                break;
            case 1:
                cout<<num[1]<<"拾";
                break;
            case 0:
                cout<<num[0];
                break;
        }
    }
    cout<<"元整"<<endl;
}
