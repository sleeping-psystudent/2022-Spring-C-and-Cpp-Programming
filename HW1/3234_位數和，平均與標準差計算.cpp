#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main(){
    double A, B, C;
    cin>>A>>B>>C;

    double A_pos[5], B_pos[5], C_pos[5];
    A_pos[0] = A, B_pos[0] = B, C_pos[0] = C;
    for(int i=1; i<=4;i++){
        A_pos[i]=(int)A%10;
        A/=(double)10;
        B_pos[i]=(int)B%10;
        B/=(double)10;
        C_pos[i]=(int)C%10;
        C/=(double)10;
    }

    for (int i=4;i>=0;i--){
        double mean = (double)(A_pos[i]+B_pos[i]+C_pos[i])/(double)3;
        double ste = sqrt((double)(pow(A_pos[i]-mean, 2)+pow(B_pos[i]-mean, 2)+pow(C_pos[i]-mean, 2))/(double)3);
        if (i==0)
            printf("%.2f %.2f %.2f\n", (A_pos[i]+B_pos[i]+C_pos[i]), mean, ste);
        else
            printf("%.0f %.2f %.2f\n", (A_pos[i]+B_pos[i]+C_pos[i]), mean, ste);
    }
}
