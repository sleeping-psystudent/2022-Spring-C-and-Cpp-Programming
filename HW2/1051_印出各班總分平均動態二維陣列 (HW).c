#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);
    getchar();

    double **num=calloc(m, sizeof(double*));
    for(int i=0;i<m;i++){
        num[i]=(double*)calloc(n, sizeof(double));
    }

    double *temp=calloc(m, sizeof(double));

    double toavg=0;
    for(int j=0;j<m;j++){
        char c;
        int k=0;
        double avg=0;
        while(c=getchar()){
        	if(c=='\n'||c==EOF) break;
            if(isdigit(c)){
                ungetc(c, stdin);
                scanf("%d", &num[j][k]);
                //printf("%d %d\n", j, num[j][k]);
                avg+=(num[j][k]/n);
                //printf("%.2f\n", avg);
                toavg+=(num[j][k]/(m*n));
                //printf("%d\n", num[j][k]);
                k++;
            }
        }
        temp[j]=avg;
        //printf("%.2f\n", temp[j]);
    }

    for(int x=0;x<m;x++){
        printf("class %d\n", x+1);
        for(int y=0;y<n;y++){
            printf("% d: %d\n", y+1, num[x][y]);
        }
        printf(" avg: %.2lf\n", temp[x]);
    }
    printf("avg: %.2lf\n", toavg);

    for(int z=0;z<m;z++){
        free(num[z]);
    }
    free(num);
    free(temp);
	return 0;
}
