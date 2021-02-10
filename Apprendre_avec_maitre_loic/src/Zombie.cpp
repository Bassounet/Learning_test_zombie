#include "Zombie.h"

// Constructeurs

Zombie::Zombie(){ // on g�n�re les zombies par d�faut :: permet de faire le lien avec le .h

    pv = 40 ;// constructeur
    attack = 5;
    name = "Brieux";

}

Zombie::Zombie(string n, int p, int atk){

    cout <<"Voici un nouveau Zombie" <<endl<<endl;

    name = n ;
    pv = p;
    attack = atk;

}

Zombie::~Zombie(){} // destruction du Zombie

int Zombie::getPv()
{
    return pv ; // getter permet d'appeler la fonction pour return sa compo
}

void Zombie::setPv(int p) // on set l'int d'o� son appel
{
    pv = p; //
}

int Zombie::getAttack()
{
    return attack ;
}
void Zombie::setAttack(int atk)
{
    attack = atk;
}

string Zombie::getName()
{
    return name ;

}

void Zombie::setName(string n)
{
    name = n ;
}

void Zombie::Showinfos()
{
    cout<<"Le nombre de Pv est : "<< getPv()<<endl;
    cout <<"Sa force est de : "<< getAttack() <<endl;
    cout <<"Son nom est " << getName() <<endl<<endl;

}

void Zombie::Fight(Zombie *cible)
{
    cout << "Le zombien "<<getName()<<" attaque notre ami "<<cible->getName()<<endl<<endl;

    cible->setPv(cible->getPv()-attack);

}
