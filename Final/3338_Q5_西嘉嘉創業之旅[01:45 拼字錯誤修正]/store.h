#ifndef STORE_H_INCLUDED
#define STORE_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Store{
    public:
        Store();
        Store(string na, int s, int r, int st, int m);
        ~Store();
        void Info();
        void Rename(string newname);
        void ChangeRent(int r);
        void Sell(int num, int price);
        void Buy(int num, int price);
        int getMoney();
        int getRent();

    private:
        string name;
        int size;
        int rent;
        int stock;
        int money;
};

#endif // STORE_H_INCLUDED
