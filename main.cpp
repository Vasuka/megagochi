#include <iostream>
void game();
using namespace std;

int main()
{
    bool gamework = true;
    int choise;
    do
    {
        cout << "              MEGAGOCHI" << endl << "          1.Play" << endl << "            0.Exit" << endl;
        cin >> choise;

        switch (choise)
        {
        case 1:
            game();
            break;
        case 0:
            return 0;
            break;
        default:
            cout << "Net takovo" << endl;
            break;
        }

    }
    while (gamework == true);
}
