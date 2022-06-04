# include <iostream>
# include <cstring>
#include <string.h>

using namespace std;

typedef struct data{
    char type[16];
    int buy;
    int sell;
}Data;

class Start_a_business{
    public:
        Start_a_business(){
            car=0;
            sellprice=0;
            totalcost=0;
            earn=0;
            memset(Garage, '\0', sizeof(Garage));
        }
        void store(char x[16]){
            if(car==10) cout<<"Garage FULL!\nCar not stored!"<<endl;
            else{
                memcpy(Garage[car], x, strlen(x));
                car+=1;

                for(int i=0;i<6;i++){
                    //cout<<Garage[car-1]<<endl;
                    if(strcmp(x, voiture[i].type)==0){
                        totalcost+=voiture[i].buy;
                        sellprice+=voiture[i].sell;
                        earn-=voiture[i].buy;
                        cout<<"Store in a car.\nType: "<<voiture[i].type<<"\nnumber car in garage: "<<car<<endl;
                        break;
                    }
                }
            }
        }
        void sell(char x[16]){
            for(int i=0;i<car;i++){
                if(strcmp(Garage[i],x)==0){
                    memset(Garage[i], '\0', strlen(Garage[i]));
                    break;
                }
                c++;
            }
            if(c==car) cout<<"Car not found!"<<endl;
            else{
                for(int j=0;j<6;j++){
                    if(strcmp(x, voiture[j].type)==0){
                        sellprice-=voiture[j].sell;
                        earn+=voiture[j].sell;
                        cout<<"You sell a car.\nType: "<<x<<"\nSell price: "<<voiture[j].sell<<"\nnumber car left in garage: "<<car-1<<endl;
                        break;
                    }
                }

                for(int k=c;k<car;k++){
                    if(k!=(car-1)) memcpy(Garage[k], Garage[k+1], strlen(Garage[k+1]));
                    else memset(Garage[k], '\0', sizeof(Garage[k]));
                }
                car-=1;
            }
            c=0;
        }
        void displayi(){
            cout<<"Sell price= "<<sellprice<<endl;
        }
        void displaycost(){
            cout<<"Total cost= "<<totalcost<<endl;
        }
        void displayp(){
            cout<<"Profit= "<<earn<<endl;
        }

        int c=0;
        Data voiture[6]={{"BMW", 8000, 20000}, {"Volkswagen", 7000, 18000}, {"Ferrari", 12000, 35000}, {"Proton", 4000, 50000}, {"Audi", 10000, 30000}, {"Lamborghini", 15000, 40000}};
    private:
        char Garage[10][16];
        int car;
        int sellprice;
        int totalcost;
        int earn;
};

int main(){
    char in;
    Start_a_business trade;

    while(1){
        cin>>in;
        if(in=='q'){
            cout<<"Thank you for visiting XMing_Garage. Bye bye."<<endl;
            break;
        }
        else if(in=='a'){
            char voi[16];
            cin>>voi;
            trade.store(voi);
            //trade.displayi();
        }
        else if(in=='s'){
            char voi[16];
            cin>>voi;
            trade.sell(voi);
            //trade.displayi();
        }
        else if(in=='c'){
            trade.displaycost();
        }
        else if(in=='i'){
            trade.displayi();
        }
        else if(in=='p'){
            trade.displayp();
        }
    }
}
