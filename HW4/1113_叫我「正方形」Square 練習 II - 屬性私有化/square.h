#ifndef SQUARE_H_INCLUDED
#define SQUARE_H_INCLUDED

#include <iostream>

class Square{
    public:
        int area();
        int getLen();
        void setLen(int n);
    private:
        int len;
};


#endif // SQUARE_H_INCLUDED
