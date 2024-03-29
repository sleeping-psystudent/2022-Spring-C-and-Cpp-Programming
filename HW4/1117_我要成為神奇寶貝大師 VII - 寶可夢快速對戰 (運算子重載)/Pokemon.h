#ifndef POKEMON_H_INCLUDED
#define POKEMON_H_INCLUDED

#include<iostream>
using namespace std;

class Pokemon
{
public:
    Pokemon();
    Pokemon(string na, int lv, int hp);
    void ShowInfo();
    void Attack(Pokemon &Target);// 攻擊，請重載此方法
    Pokemon operator>>(Pokemon &tar){
        Attack(tar);
        return tar;
    }
    void Defence( int atkp );// 防御(被攻擊？)
    void Cure();// 治癒
    //加PokemonHealthCenter為好友
    friend class PokemonHealthCenter;
private:
    void setData(string name, int lv, int hp);
    string Name;
    int Lv;
    int HpMax;
    int HpCur;
};

class PokemonHealthCenter
{
public:
        PokemonHealthCenter(string na);
         //設定神奇寶貝中心的名字
        void Cure(Pokemon &p);
        PokemonHealthCenter operator<<(Pokemon &po){
            Cure(po);
            return Name;
        }
            //將傳入的神奇寶貝回復滿血，請重載此方法
          //並印出在「xx神奇寶貝中心」恢復
private:
        string Name;
};
typedef PokemonHealthCenter PC;

#endif // POKEMON_H_INCLUDED
