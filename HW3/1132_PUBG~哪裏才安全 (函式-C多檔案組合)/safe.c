#include "safe.h"
#include <stdio.h>

int safe(int array[5][5]){
    int i, j, direction;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(array[i][j]==2) goto here;
        }
    }
    here:
        //printf("%d %d\n", i, j);
        for(int x=1;x<5;x++){
            if(i-x>=0){
                if(array[i-x][j]==1){
                    direction=1;
                    goto here2;
                }
            }
            if(j+x<5){
                if(array[i][j+x]==1){
                    direction=2;
                    //printf("%d, %d", i, j);
                    goto here2;
                }
            }
            if(i+x<5){
                if(array[i+x][j]==1){
                    direction=3;
                    //printf("%d, %d\n",i, j);
                    goto here2;
                }
            }
            if(j-x>=0){
                if(array[i][j-x]==1){
                    direction=4;
                    //printf("%d\n", x);
                    goto here2;
                }
            }

        }
    here2:
        return direction;
}
