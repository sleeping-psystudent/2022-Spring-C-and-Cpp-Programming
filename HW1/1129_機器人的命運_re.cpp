#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int M, N, X_1, Y_1, E_1, N_1, F_1, X_2, Y_2, E_2, N_2, F_2;
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d", &M, &N, &X_1, &Y_1, &E_1, &N_1, &F_1, &X_2, &Y_2, &E_2, &N_2, &F_2);
    int t=1;
    char dir_1='N', dir_2='E';
    int N_1_c=0, N_2_c=0, E_1_c=0, E_2_c=0;
    if (F_1>F_2){
        while(t!=F_2+1){
            //cout<<dir_1<<" "<<X_1<<","<<Y_1<<endl;
            //cout<<dir_2<<" "<<X_2<<","<<Y_2<<endl;
            if (dir_1=='N'){
                Y_1+=1;
                N_1_c+=1;

                if (N_1_c==N_1) {
                    dir_1='E';
                    N_1_c=0;
                }
                if (Y_1==N) Y_1=0;
            }
            else if (dir_1=='E'){
                X_1+=1;
                E_1_c+=1;

                if (E_1_c==E_1) {
                    dir_1='N';
                    E_1_c=0;
                }
                if (X_1==M) X_1=0;
            }

            if (dir_2=='N'){
                Y_2+=1;
                N_2_c+=1;

                if (N_2_c==N_2) {
                    dir_2='E';
                    N_2_c=0;
                }
                if (Y_2==N) Y_2=0;
            }
            else if (dir_2=='E'){
                X_2+=1;
                E_2_c+=1;

                if (E_2_c==E_2) {
                    dir_2='N';
                    E_2_c=0;
                }
                if (X_2==M) X_2=0;
            }

            //cout<<t<<" "<<X_1<<","<<Y_1<<" "<<X_2<<","<<Y_2<<endl;
            if(X_1==X_2 && Y_1==Y_2){
                cout<<"robots explode at time "<<t<<endl;
                return 0;
            }
            t++;
    }
        while(t!=F_1+1){
            if (dir_1=='N'){
                Y_1+=1;
                N_1_c+=1;

                if (N_1_c==N_1) {
                    dir_1='E';
                    N_1_c=0;
                }
                if (Y_1==N) Y_1=0;
            }
            else if (dir_1=='E'){
                X_1+=1;
                E_1_c+=1;

                if (E_1_c==E_1) {
                    dir_1='N';
                    E_1_c=0;
                }
                if (X_1==M) X_1=0;
            }

            //cout<<t<<" "<<X_1<<","<<Y_1<<" "<<X_2<<","<<Y_2<<endl;
            if(X_1==X_2 && Y_1==Y_2){
                cout<<"robots explode at time "<<t<<endl;
                return 0;
            }
            t++;
    }
    }

    else if (F_2>F_1){
        while(t!=F_1+1){
            //cout<<dir_1<<" "<<X_1<<","<<Y_1<<endl;
            //cout<<dir_2<<" "<<X_2<<","<<Y_2<<endl;
            if (dir_1=='N'){
                Y_1+=1;
                N_1_c+=1;

                if (N_1_c==N_1) {
                    dir_1='E';
                    N_1_c=0;
                }
                if (Y_1==N) Y_1=0;
            }
            else if (dir_1=='E'){
                X_1+=1;
                E_1_c+=1;

                if (E_1_c==E_1) {
                    dir_1='N';
                    E_1_c=0;
                }
                if (X_1==M) X_1=0;
            }

            if (dir_2=='N'){
                Y_2+=1;
                N_2_c+=1;

                if (N_2_c==N_2) {
                    dir_2='E';
                    N_2_c=0;
                }
                if (Y_2==N) Y_2=0;
            }
            else if (dir_2=='E'){
                X_2+=1;
                E_2_c+=1;

                if (E_2_c==E_2) {
                    dir_2='N';
                    E_2_c=0;
                }
                if (X_2==M) X_2=0;
            }

            //cout<<t<<" "<<X_1<<","<<Y_1<<" "<<X_2<<","<<Y_2<<endl;
            if(X_1==X_2 && Y_1==Y_2){
                cout<<"robots explode at time "<<t<<endl;
                return 0;
            }
            t++;
    }
        while(t!=F_2+1){
            //cout<<X_1<<","<<Y_1<<endl;
            //cout<<dir_2<<" "<<E_2<<","<<E_2_c<<endl;
            if (dir_2=='N'){
                Y_2+=1;
                N_2_c+=1;

                if (N_2_c==N_2) {
                    dir_2='E';
                    N_2_c=0;
                }
                if (Y_2==N) Y_2=0;
            }
            else if (dir_2=='E'){
                X_2+=1;
                E_2_c+=1;

                if (E_2_c==E_2) {
                    dir_2='N';
                    E_2_c=0;
                }
                if (X_2==M) X_2=0;
            }

            //cout<<t<<" "<<X_1<<","<<Y_1<<" "<<X_2<<","<<Y_2<<endl;
            if(X_1==X_2 && Y_1==Y_2){
                cout<<"robots explode at time "<<t<<endl;
                return 0;
            }
            t++;
    }
    }
    else {
        while(t!=F_1+1){
            //cout<<dir_1<<" "<<X_1<<","<<Y_1<<endl;
            //cout<<dir_2<<" "<<X_2<<","<<Y_2<<endl;
            if (dir_1=='N'){
                Y_1+=1;
                N_1_c+=1;

                if (N_1_c==N_1) {
                    dir_1='E';
                    N_1_c=0;
                }
                if (Y_1==N) Y_1=0;
            }
            else if (dir_1=='E'){
                X_1+=1;
                E_1_c+=1;

                if (E_1_c==E_1) {
                    dir_1='N';
                    E_1_c=0;
                }
                if (X_1==M) X_1=0;
            }

            if (dir_2=='N'){
                Y_2+=1;
                N_2_c+=1;

                if (N_2_c==N_2) {
                    dir_2='E';
                    N_2_c=0;
                }
                if (Y_2==N) Y_2=0;
            }
            else if (dir_2=='E'){
                X_2+=1;
                E_2_c+=1;

                if (E_2_c==E_2) {
                    dir_2='N';
                    E_2_c=0;
                }
                if (X_2==M) X_2=0;
            }

            //cout<<t<<" "<<X_1<<","<<Y_1<<" "<<X_2<<","<<Y_2<<endl;
            if(X_1==X_2 && Y_1==Y_2){
                cout<<"robots explode at time "<<t<<endl;
                return 0;
            }
            t++;
    }
    }
    cout<<"robots will not explode"<<endl;
}
