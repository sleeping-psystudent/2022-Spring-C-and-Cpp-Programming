#include <iostream>

using namespace std;

struct Critics{
        int level;
        int attack;
        int defence;
        int gossip;
};

int main(){
    int n;
    cin>>n;

    Critics employee[n];

    for(int i=0;i<n;i++){
        cin>>employee[i].level>>employee[i].attack>>employee[i].defence;
        employee[i].gossip=0;
    }

    int m;
    cin>>m;
    employee[m-1].gossip=1;

    for(int j=0;j<n;j++){
        if(j!=(m-1)&&employee[j].level<employee[m-1].level&&employee[j].defence<employee[m-1].attack){
            employee[j].gossip=1;
            for(int k=0;k<n;k++){
                if(k!=j&&employee[k].level<employee[j].level&&employee[k].defence<employee[j].attack){
                employee[k].gossip=1;
                }
            }
        }
    }

    int c=0;
    for(int p=0;p<n;p++){
        if(employee[p].gossip==1) c++;
    }
    cout<<c<<endl;
}

/*
8
7 40 20
6 4 10
3 5 30
2 70 20
8 25 100
5 11 30
1 33 60
9 66 90
5

5
1 5 70
3 1 10
5 10 20
7 99 30
9 77 60
4
*/
