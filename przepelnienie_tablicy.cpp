#include <iostream>
using namespace std;

const int max_pojemnosc = 10;

int main()
{
    int tab[max_pojemnosc];
    int n = 0;

    try
    {
        for (int i = 0; i < max_pojemnosc + 2; i++)
        {
            if (n > max_pojemnosc)
            {
                throw "tablica przepelniona";
            }
            cout << "podaj liczbe: ";
            cin >> tab[n++];
        }
    }
    catch (char const* msg)
    {
        cout << "ERROR: " << msg << endl;
    }

    return 0;
}
