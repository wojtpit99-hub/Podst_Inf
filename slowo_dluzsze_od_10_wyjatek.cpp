#include <iostream>
using namespace std;

int main()
{
    string slowo;

    cout << "podaj slowo do 10 liter: ";
    cin >> slowo;

    try
    {
        if(slowo.length() > 10)
        {
            throw "zbyt dlugie slowo!";
        }
        else
        {
            cout << "Podales slowo do 10 liter!";
        }
    }
    catch(const char* msg)
    {
        cout << "ERROR: " << msg;
    }

    return 0;
}
