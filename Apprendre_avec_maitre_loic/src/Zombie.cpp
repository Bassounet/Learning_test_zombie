#include "Zombie.h"

// Constructeurs

Zombie::Zombie(){ // on génère les zombies par défaut :: permet de faire le lien avec le .h

    pv = 40 ;// constructeur
    attack = 5;
    name = "Brieux";

}

Zombie::Zombie(string n, int p, int atk){

    cout <<"Creeons un nouveau Zombie" <<endl<<endl;

    name = n ;
    pv = p;
    attack = atk;

}

Zombie::~Zombie(){} // destruction du Zombie

int Zombie::getPv()
{
    return pv ; // getter permet d'appeler la fonction pour return sa compo
}

void Zombie::setPv(int p) // on set l'int d'où son appel
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
    cout <<"Son nom est " << getName() <<endl;
    cout <<"Le nombre de Pv de "<<getName()<<" est : "<< getPv()<<endl;
    cout <<"La force de "<< getName()<< " est de : " << getAttack() <<endl<<endl;

}

void Zombie::Fight(Zombie *cible)
{
    cout << "Le zombien "<<getName()<<" attaque notre ami "<<cible->getName()<<endl<<endl;

    cible->setPv(cible->getPv()-attack);

    cout <<"outch le combat a fait rage "<<endl;
    cout <<"La preuve voyez ses nouveaux Pv : "<< cible->getPv()<<" ca fait mal ... " << endl;

}

