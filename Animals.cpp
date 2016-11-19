#include <iostream>
#include "Animals.h"

using namespace std;

Animal::Animal(string name, int weight, unsigned int energy, int relationships)
{

}

void Animal::feed(int kg)
{weight+=kg*0.9;
cout << "Eto givotnoe vse sogralo." << endl;
}

 void Animal::sleep(int minutes)
{energy=+minutes * 0.2;

}
