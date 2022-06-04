#include <iostream>
#include <string>

using namespace std;

class eCash{
    public:
        eCash(){
            Money=0;
        }
        void store(int m){
            if(m>=0){
                cout<<"eCash: You stored "<<m<<"."<<endl;
                Money+=m;
            }
            else cout<<"eCash: Please enter a number > 0."<<endl;
        }
        void pay(int m){
            if(m>Money) cout<<"eCash: Insufficient balance."<<endl;
            else if(m>=0){
                cout<<"eCash: You spend "<<m<<"."<<endl;
                Money-=m;
            }
            else cout<<"eCash: Please enter a number > 0."<<endl;
        }
        void display(){
            cout<<"eCash: You remaining "<<Money<<"."<<endl;
        }
    private:
       int Money;
};

int main(){
    eCash per;
    while(1){
        char b;
        int m;
        cin>>b;
        if(b=='q'){
            cout<<"eCash: Thank you. Bye Bye."<<endl;
            break;
        }
        else if(b=='s'){
            cin>>m;
            per.store(m);
        }
        else if(b=='p'){
            cin>>m;
            per.pay(m);
        }
        else if(b=='d'){
            per.display();
        }
    }
}
