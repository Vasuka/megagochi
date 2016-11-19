#include <iostream>
#include <cstdlib>
#include "game.h"
#include "Cat.h"
using namespace std;
void game()
{
    string name;
    int age = rand() % 14 + 1;
    bool game = true;
    int choise;
    int time;
    int kg;
    int turn = 1;
    cout << "Vi podobrali na ulitse kota" << endl << "Vi reshili nazvat ego...";
    cin >> name;
    cout << endl << "Vi reshili nazvat ego " << name << "." << endl << "Na vid emu " << age + rand() % 4 - 2 << "let."<< endl;
    Cat cat(name,10,rand () % 50 +20, 0, rand () % 30, 4, false);
    do
    {

        cout << "Kot." << endl;
        cout << "1.Pogladit'" << endl << "2.Pokormit'" << endl << "3.Ne trogat'" << endl << "4.Udarit'" << endl << "Ya hochu ";
        cin >> choise;

        switch (choise)
        {
        case 1:
            cout << "Skolko sekund?" << endl;
            cin >> time;
            cat.carres(time);
            break;
        case 2:
            cout << "Skolko kg?";
            cin >> kg;
            cat.feed(kg);
            break;
        default:
            cout << "Net takovo" << endl;
            break;

        }
         cat.weight -= turn;

            if (cat.weight < 0)
            {cout << cat.name << " obrel otritsatelnuu massu." << endl << endl << endl <<"Iz za ego gravitacii vi uleteli v kosmos." << endl << "Vi mertvi" << endl << "konyec" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            game = false;}

            if (cat.weight > 100)
            {cout << cat.name << " obrel slishkom bolshuu plotnost'" << endl << "i prevratilsya v chornuu diru." << endl << endl << endl <<"Vas zasosalo." << endl << "Vi mertvi" << endl << "Iz za vashego zgelania kormit' pogibnit vse chelovechestvo" << endl << "konyec" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            game = false;}


            turn++;
    }
    while (game == true);



}
