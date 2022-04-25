#include<iostream>
#include<string>
#include<stdio.h>
#include<cstdlib>

using namespace std;

int main(){
    string ser[100];
    string a;
    int i=0;
    while(cin>>a){
        ser[i]=a;
        char ch = getchar();
        if(ch=='\n') break;
        i++;
    }

    int sum=0;
    ser[0]="0", ser[i-1]="0";
    for(int j=0;j<i-1;j++){
        if (std::atoi(ser[j].c_str())>std::atoi(ser[j+1].c_str())) sum+=((std::atoi(ser[j].c_str())-std::atoi(ser[j+1].c_str()))*6);
        else if (std::atoi(ser[j].c_str())<std::atoi(ser[j+1].c_str())) sum+=((std::atoi(ser[j+1].c_str())-std::atoi(ser[j].c_str()))*10);
        else sum+=5;
    }
    cout<<sum<<endl;
}
