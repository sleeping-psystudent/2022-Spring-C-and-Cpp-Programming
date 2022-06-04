# include <iostream>
# include <string>
# include "Pokemon.h"

Pokemon::Pokemon(string name, int lv, int hp){
    Pokemon::setData(name, lv, hp);
}

void Pokemon::ShowInfo(){
    cout<<"Name: "<<Name<<endl;
    cout<<"Lv: "<<Lv<<endl;
    cout<<"HP: "<<HpCur<<"/"<<HpMax<<endl<<endl;
}

void Pokemon::Attack(){
}
void Pokemon::Defence(){
}
void Pokemon::Cure(){
}
void Pokemon::setData(string name, int lv, int hp){
    if(name==" "){
        cout<<"Name can't be empty."<<endl;
        name="No Name";
    }
    if(lv<1){
        cout<<"Lv setting error."<<endl;
        lv=1;
    }
    if(hp<1){
        cout<<"Hp setting error."<<endl;
        hp=1;
    }

    Name=name;
    Lv=lv;
    HpCur=hp;
    HpMax=hp;
}
