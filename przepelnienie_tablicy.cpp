#include <iostream>

using namespace std;

const int MAX_SIZE = 10;

int main()
{
    int tab[MAX_SIZE];
    int n = 0;

    try
    {
        for (int i = 0; i < MAX_SIZE + 1; i++)
            {
            if (n >= MAX_SIZE)
            {
                throw "Tablica jest przepe³niona!";
            }
            cout << "Podaj liczbe: ";
            cin >> tab[n++];
        }
    }
    catch (const char* msg)
    {
        cout << "ERROR: " << msg << endl;
    }

    return 0;
}

