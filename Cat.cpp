#include <iostream>
#include "Cat.h"
#include <cstdlib>

using namespace std;
Cat::Cat(string name, int weight, unsigned int energy, int relationship, int mood, int legscount, bool Claws) : Mammal(name, weight, energy, relationship, legscount)
{

}

void Cat::carres(int seconds)
{
mood = mood + (rand() % 3) * (seconds - 3);
if (seconds > 3)
{cout << "Vi pogladili givotnoe" << endl;
murr(seconds * (rand() % 3 + 1));}
else {cout << "Vi bukval'no tknuli govotnoe"; voice(rand() % 2 +1);
};
}

void Cat::murr(int time)
{
 cout << "MYPP" <<endl;
 energy -= 10;
}
