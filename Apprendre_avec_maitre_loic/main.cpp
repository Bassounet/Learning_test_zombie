#include "Zombie.h"


using namespace std;

int main()
{
        Zombie z1( "Zigotox", 70, 8);
        z1.Showinfos();

        Zombie z2( "Le boulet", 10, 2);
        z2.Showinfos();

        Zombie z3( "machine", 95, 9);
        z3.Showinfos();

        z3.Fight(&z2);// on fait attaquer le boulet par machine


    return 0;
}
