#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int *temp;
    temp=(int*)malloc(sizeof(int)*n);

    fflush(stdin);
    char c;
    int i=0;
    double avg=0;
    while((c=getchar())!=EOF){
        if(isdigit(c)){
            ungetc(c, stdin);
            scanf("%d", &temp[i]);
            avg+=(double)temp[i]/n;
            //printf("%lf\n", avg);
            i++;
        }
    }

    printf("avg = %.2f\nfail:\n", avg);

    for(int j=0;j<n;j++){
        if(temp[j]<60) printf("%d%c %d\n", j+1, ':', temp[j]);
        //printf("%d %d\n", j+1, temp[j]);
    }

    printf("highest:\n");
    int max=0;
    for(int k=0;k<n;k++){
        if(temp[k]>temp[max]) max=k;
    }
    printf("%d%c %d", max+1, ':', temp[max]);

    free(temp);
	return 0;
}
