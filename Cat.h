#ifndef CAT_H
#define CAT_H
#include "Mammal.h"
#include "Animals.h"
class Cat : public Mammal{
 bool Claws;
  int mood;
public:
   Cat(std::string name, int weight, unsigned int energy, int relationship, int mood, int legscount, bool Claws);
void murr(int minutes);
void carres(int seconds);

};


#endif // CAT_H_INCLUDED
