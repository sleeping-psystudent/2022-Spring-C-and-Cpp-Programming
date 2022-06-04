#ifndef SQUARE_H_INCLUDED
#define SQUARE_H_INCLUDED

class Square{
    public:
        Square(){
            len=0;
        }
        Square(int n);
        int area();
        int getLen();
        void setLen(int n);
        friend int cmpSquare(Square &q1, Square &q2);
    private:
        int len;
};

int cmpSquare(Square &q1, Square &q2);

#endif // SQUARE_H_INCLUDED
