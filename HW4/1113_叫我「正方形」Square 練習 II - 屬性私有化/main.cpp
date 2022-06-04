#include<iostream>
#include "square.h"
using namespace std;

int main()
{
    Square s1,s2;
    int n1,n2;

    cin >> n1;
    s1.setLen(n1);
    cout << "s1 len=" << s1.getLen() << ", area="<<s1.area()<<endl;

    cin >> n2;
    s2.setLen(n2);
    cout << "s2 len=" << s2.getLen() << ", area="<<s2.area()<<endl;

    return 0;
}
