#ifndef ZOMBIE_H
#define ZOMBIE_H

#include<iostream>
#include<string>

using namespace std;

class Zombie
{
    public:

        //Constrcuteur zombie
        Zombie();
        Zombie(string n, int pv, int atk ); // cr�atoin des param�tres �) appeler pour cr�ation des zombix

        // Destructeur zombie
        ~Zombie(); // le tield permet de cr�er le fait de l'effacer

        // Getter permet de r�cup�rer la variable encapsul�e dans private
        int getPv();
        void setPv(int p); // void est l� car le set ne retourne rien ...

        int getAttack();
        void setAttack (int atk);

        string getName();
        void setName ( string n ); // Le set est l� pour le r�glage ( attribution de la valeur d'o� le string/ int


void Showinfos(); // on cr�e une fonction ici dans la bibli pour pouvoir l'appeler plus tard

void Fight(Zombie *cible);// pareil on cr�e une fonction fight pour l'apeller plus tard

void Show_stat_after_fight(); // on cr�e une fcontion pour avoir les stats apr�s le fight du coup c'est cool

       private: // on encapsule les param�tres que on veut ne pas modifier de base

       int pv = 40;
       int attack = 5;
       string name = "Brieux";










};

#endif // ZOMBIE_H
