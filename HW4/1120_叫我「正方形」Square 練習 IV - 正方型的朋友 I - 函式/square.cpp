#include <iostream>
#include "square.h"

using namespace std;

Square::Square(int n){
    setLen(n);
}

int Square::area(){
    return len*len;
}
int Square::getLen(){
    return len;
}
void Square::setLen(int n){
    if(n<1){
        cout<<"len setting error"<<endl;
        len=1;
    }
    else len=n;
}

void cmpSquare(Square &q1, Square &q2){
    if(q1.len<q2.len) cout<<"1<2"<<endl;
    else if(q1.len>q2.len) cout<<"1>2"<<endl;
    else cout<<"1==2"<<endl;
}
