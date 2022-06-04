#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        for(int j=1;j<(2*n);j++){
            if(i==0&&j==n) printf("%c", '^');
            else if(i!=0&&j==(n-i)) printf("%c", '/');
            else if(i!=0&&j==(n+i)) printf("%c", '\\');
            else printf("%c", ' ');
        }
        if(i!=n-1) printf("\n");
    }
    return 0;
}
