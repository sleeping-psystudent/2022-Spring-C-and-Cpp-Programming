#include <iostream>
#include <string>
#include "store.h"

using namespace std;

int main(){

    char order;
    string name;
    int size, rent, stock, money;
    cin >> name >> size >> rent >> stock >> money;
    Store *s1 = new Store(name, size, rent, stock, money);
    while(1){
        cin >> order;
        if (order == 'q')
            break;
        else if (order == 'r'){
            string newname;
            cin >> newname;
            s1->Rename(newname);
        }
        else if (order == 'i'){
            s1->Info();
        }
        else if (order == 'c'){
            int r;
            cin >> r;
            s1->ChangeRent(r);
        }
        else if (order == 'd'){
            delete s1;
        }
        else if (order == 'b'){
            int num, price;
            cin >> num >> price;
            s1->Buy(num, price);
        }
        else if (order == 's'){
            int num, price;
            cin >> num >> price;
            s1->Sell(num, price);
        }
        else if (order == 'p'){
            int r = s1->getRent();
            int m = s1->getMoney();
            if (r > m){
                cout << "You don't have enough money to pay the rent" << endl;
                delete s1;
            }
            else{
                cout << "Successfully pay rent" << endl;
                s1->Buy(1, r);
                s1->Sell(1, 0);
            }
        }
    }
    return 0;
}
