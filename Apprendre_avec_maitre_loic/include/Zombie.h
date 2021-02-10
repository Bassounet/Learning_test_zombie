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
        Zombie(string n, int pv, int atk ); // créatoin des paramètres à) appeler pour création des zombix

        // Destructeur zombie
        ~Zombie(); // le tield permet de créer le fait de l'effacer

        // Getter permet de récupérer la variable encapsulée dans private
        int getPv();
        void setPv(int p); // void est là car le set ne retourne rien ...

        int getAttack();
        void setAttack (int atk);

        string getName();
        void setName ( string n ); // Le set est là pour le réglage ( attribution de la valeur d'où le string/ int


void Showinfos(); // on crée une fonction ici dans la bibli pour pouvoir l'appeler plus tard

void Fight(Zombie *cible);// pareil on crée une fonction fight pour l'apeller plus tard

void Show_stat_after_fight(); // on crée une fcontion pour avoir les stats après le fight du coup c'est cool

       private: // on encapsule les paramètres que on veut ne pas modifier de base

       int pv = 40;
       int attack = 5;
       string name = "Brieux";










};

#endif // ZOMBIE_H
