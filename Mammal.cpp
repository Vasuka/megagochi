#include <iostream>
#include "Mammal.h"
#include "Animals.h"
using namespace std;
Mammal::Mammal(string name, int weight, unsigned int energy, int relationships, int legcount) :  Animal(name, weight, energy, relationship)
{

}

void Mammal::feedWithMilk(int kg)
{weight+=weight+kg*0.2;
cout << "Givotnoe potchi nichego ne vipelo, no vse prolilo... Emu ne nugno tvoe chertogo moloko!" << endl;
}

void Mammal::voice(int time)
{
    for(int i = 0; i<time ; i++)
    {
        cout << "Ìÿó";
    }

}
