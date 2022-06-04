#include <stdio.h>
#include <string.h>

struct Pokemon{
    char Name[100];
    int Lv;
    int Hp;
};

int main(){
    int n;
    scanf("%d", &n);
    struct Pokemon *animal=malloc(sizeof(*animal));

    for(int i=0;i<n;i++){
        scanf("%s", &animal[i].Name);
        scanf("%d", &animal[i].Lv);
        scanf("%d", &animal[i].Hp);
    }
    int com;
    scanf("%d", &com);

    char temp_Name[100];
    int temp_Lv;
    int temp_Hp;
    switch(com){
        case 0:
            break;
        case 1:
            for(int k=0;k<(n-1);k++){
                for(int m=0;m<(n-k-1);m++){
                    if(strcmp(animal[m].Name, animal[m+1].Name)>0){
                        strcpy(temp_Name, animal[m].Name);
                        strcpy(animal[m].Name, animal[m+1].Name);
                        strcpy(animal[m+1].Name, temp_Name);

                        temp_Lv=animal[m].Lv;
                        animal[m].Lv=animal[m+1].Lv;
                        animal[m+1].Lv=temp_Lv;

                        temp_Hp=animal[m].Hp;
                        animal[m].Hp=animal[m+1].Hp;
                        animal[m+1].Hp=temp_Hp;
                    }
                }
            }
            break;
        case 2:
            for(int k=0;k<(n-1);k++){
                for(int m=0;m<(n-k-1);m++){
                    if(animal[m].Lv>animal[m+1].Lv){
                        strcpy(temp_Name, animal[m].Name);
                        strcpy(animal[m].Name, animal[m+1].Name);
                        strcpy(animal[m+1].Name, temp_Name);

                        temp_Lv=animal[m].Lv;
                        animal[m].Lv=animal[m+1].Lv;
                        animal[m+1].Lv=temp_Lv;

                        temp_Hp=animal[m].Hp;
                        animal[m].Hp=animal[m+1].Hp;
                        animal[m+1].Hp=temp_Hp;
                    }
                }
            }
            break;
        case 3:
            for(int k=0;k<(n-1);k++){
                for(int m=0;m<(n-k-1);m++){
                    if(animal[m].Hp>animal[m+1].Hp){
                        strcpy(temp_Name, animal[m].Name);
                        strcpy(animal[m].Name, animal[m+1].Name);
                        strcpy(animal[m+1].Name, temp_Name);

                        temp_Lv=animal[m].Lv;
                        animal[m].Lv=animal[m+1].Lv;
                        animal[m+1].Lv=temp_Lv;

                        temp_Hp=animal[m].Hp;
                        animal[m].Hp=animal[m+1].Hp;
                        animal[m+1].Hp=temp_Hp;
                    }
                }
            }
            break;
    }

    for(int j=0;j<n;j++){
        printf("Name: %s\n", animal[j].Name);
        printf("Lv: %d\n", animal[j].Lv);
        printf("HP: %d\n\n", animal[j].Hp);
    }
}
