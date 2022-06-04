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
    void Attack(Pokemon &Target);// �����A�Э�������k
    Pokemon operator>>(Pokemon &tar){
        Attack(tar);
        return tar;
    }
    void Defence( int atkp );// ���s(�Q�����H)
    void Cure();// �v¡
    //�[PokemonHealthCenter���n��
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
         //�]�w���_�_�����ߪ��W�r
        void Cure(Pokemon &p);
        PokemonHealthCenter operator<<(Pokemon &po){
            Cure(po);
            return Name;
        }
            //�N�ǤJ�����_�_���^�_����A�Э�������k
          //�æL�X�b�uxx���_�_�����ߡv��_
private:
        string Name;
};
typedef PokemonHealthCenter PC;

#endif // POKEMON_H_INCLUDED
