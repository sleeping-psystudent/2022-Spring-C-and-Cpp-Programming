#include <iostream>
#include <string>
#include "store.h"

using namespace std;

Store::Store(){}

Store::Store(string na, int s, int r, int st, int m){
    // Todo
    name=na;
    if(s<=0){
        cout<<"size setting error"<<endl;
        size=10;
    }
    else size=s;

    if(r<=0){
        cout<<"rent setting error"<<endl;
        rent=5;
    }
    else rent=r;

    if(m<=0){
        cout<<"money setting error"<<endl;
        money=1000;
    }
    else money=m;

    if(stock<0){
        cout<<"stock setting error"<<endl;
        stock=5;
    }
    else stock=st;
}

Store::~Store(){
    // Todo
    cout<<name<<" will no longer rent"<<endl;
}

void Store::Info(){
    // Todo
    cout<<"===Info==="<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Size: "<<size<<endl;
    cout<<"Rent: "<<rent*size<<endl;
    cout<<"Stock: "<<stock<<endl;
    cout<<"Money: "<<money<<endl;
}

void Store::Rename(string newname){
    // Todo
    name=newname;
}

void Store::ChangeRent(int r){
    // Todo
    if(r<=0) cout<<"invalid input"<<endl;
    else rent=r;
}

int Store::getRent(){
    // Todo
    return rent*size;
}

void Store::Sell(int num, int price){
    // Todo
    if(num>stock) cout<<"Not enough stock, invalid selling"<<endl;
    else{
        stock-=num;
        money+=price*num;
    }
}

void Store::Buy(int num, int price){
    // Todo
    if(num*price>money) cout<<"Not enough money, invalid buying"<<endl;
    else{
        stock+=num;
        money-=num*price;
    }
}

int Store::getMoney(){
    // Todo
    return money;
}
