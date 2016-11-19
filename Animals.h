#ifndef ANIMALS_H_INCLUDED
#define ANIMALS_H_INCLUDED
class Animal
{std::string name;
 friend void game();
 unsigned int age;
 protected:
       unsigned int energy;
       int relationship;
        int weight;
 public:
 Animal(std::string name, int weight, unsigned int energy, int relationship);
 void feed(int kg);
 void sleep(int minutes);

};


#endif // ANIMALS_H_INCLUDED
