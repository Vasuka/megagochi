#ifndef MAMMAL_H
#define MAMMAL_H
#include "Animals.h"
class Mammal : public Animal
{int legscount;
   public:
Mammal(std::string name, int weight, unsigned int energy, int relationship, int legscount);

void feedWithMilk(int kg);
void voice(int time);


};


#endif // MAMMAL_H_INCLUDED
