#include <stdio.h>

void C(int n, int m);

int main(){
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    C(n, m);
}

void C(int n, int m){
    if(m>n) printf("%d\n%d", 0, 0);
    else{
        int UpF=1;
        for(int i=n;i>0;i--){
            UpF*=i;
        }
        int DownF_1=1;
        for(int j=m;j>0;j--){
            DownF_1*=j;
        }
        int DownF_2=1;
        for(int k=n-m;k>0;k--){
            DownF_2*=k;
        }
        printf("%d\n%d", UpF/DownF_2, UpF/(DownF_1*DownF_2));
    }
}
