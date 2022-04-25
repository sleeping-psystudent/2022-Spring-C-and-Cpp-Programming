#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    double a, b;
    char oper;
    cin>>a>>b>>oper;
    switch (oper){
        case '+':
            printf("%.2f %c %.2f %c %.2f", a, oper, b, '=', a+b);
            break;
        case '-':
            printf("%.2f %c %.2f %c %.2f", a, oper, b, '=', a-b);
            break;
        case '*':
            printf("%.2f %c %.2f %c %.2f", a, oper, b, '=', a*b);
            break;
        case '/':
            printf("%.2f %c %.2f %c %.2f", a, oper, b, '=', a/b);
            break;
    }
}
