#include<iostream>

using namespace std;

int main(){
    int school, grade;
    cin>>school>>grade;
    switch(school){
        case 1:
            if (grade>=60)
                cout<<"pass"<<endl;
            else
                cout<<"fail"<<endl;
            break;
        case 2:
            if (grade>=70)
                cout<<"pass"<<endl;
            else
                cout<<"fail"<<endl;
            break;
    }
}
