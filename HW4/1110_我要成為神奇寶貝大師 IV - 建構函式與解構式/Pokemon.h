#ifndef POKEMON_H_INCLUDED
#define POKEMON_H_INCLUDED

using namespace std;

class Pokemon{
    public:
        Pokemon(){
            Name="No Name";
            Lv=1;
            HpCur=1;
            HpMax=1;
        }
        ~Pokemon(){
            cout<<Name<<" has returned to the nature."<<endl;
        }
        Pokemon(string name, int lv, int hp);
        void ShowInfo();
        void Attack();
        void Defence();
        void Cure();
        void setData(string name, int lv, int hp);
    private:
        string Name;
        int Lv;
        int HpMax;
        int HpCur;
};

#endif // POKEMON_H_INCLUDED
