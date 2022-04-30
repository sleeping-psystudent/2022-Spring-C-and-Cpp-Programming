#include <stdio.h>

struct Pokemon{
    char Name[100];
    int Lv;
    int Hp;
};

int main(){
    struct Pokemon animal[3];

    for(int i=0;i<3;i++){
        scanf("%s", &animal[i].Name);
        scanf("%d", &animal[i].Lv);
        scanf("%d", &animal[i].Hp);
    }
    int com;
    scanf("%d", &com);

    int k=0;
    for(int j=0;j<3;j++){
        if(animal[j].Lv>=com){
            printf("Name: %s\n", animal[j].Name);
            printf("Lv: %d\n", animal[j].Lv);
            printf("HP: %d\n\n", animal[j].Hp);
            k++;
        }
    }
    if(k==0) printf("%s", "not found");
}
