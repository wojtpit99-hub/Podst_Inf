#include <iostream>

using namespace std;

int main()
{
    const int max_word = 10;
    string imie;

    cout << "Podaj imie: ";
    cin >> imie;

    try
    {
        if (imie.length() > max_word)
            {
            throw "Blad: Imie jest za dlugie!";
            }
        cout << "Podane imie: " << imie << endl;
    }
        catch (const char* blad)
        {
        cout << blad << endl;
        }

    return 0;
}
