#include <stdio.h>
#include <string.h>

int main(void) {
    char te[3];
    gets(te);
	int num=atoi(te);
	char food_name[num][100][64];
	char row[num];

    for(int tem1=0;tem1<num;tem1++){
		for(int tem2=0;tem2<100;tem2++){
			for(int tem3=0;tem3<64;tem3++){
				strcpy(food_name[tem1][tem2][tem3], '\0');
			}
		}
	}

	for(int i=0;i<num;i++){
	    fflush(stdin);
	    gets(row);
	    //printf("%s", row);
	    int c=0;
	    char* space=strtok(row, " ");
	    while(space!=NULL){
            strcpy(food_name[i][c], space);
            space=strtok(NULL, " ");
            //printf("%s\n", food_name[i][c]);
            c++;
	    }
	}

	char te2[3];
	gets(te2);
	int com=atoi(te2);
	char ser[com][100][64];
	char foods[com];

    for(int tem1=0;tem1<num;tem1++){
		for(int tem2=0;tem2<100;tem2++){
			for(int tem3=0;tem3<64;tem3++){
				strcpy(ser[tem1][tem2][tem3], '\0');
			}
		}
	}

	for(int j=0;j<com;j++){
	    fflush(stdin);
	    gets(foods);
	    //printf("%s", row);
	    int b=0;
	    char* space2=strtok(foods, " ");
	    while(space2!=NULL){
            strcpy(ser[j][b], space2);
            space2=strtok(NULL, " ");
            //printf("%s\n", ser[j][b]);
            b++;
	    }
	}

	for(int fin_com=0;fin_com<com;fin_com++){
	    for(int fin_te=0;fin_te<2;fin_te++){
            for(int fin_num=0;fin_num<num;fin_num++){
                if(strcmp(ser[fin_com][fin_te], food_name[fin_num][1]))
            }
	    }
	}

	return 0;
}
