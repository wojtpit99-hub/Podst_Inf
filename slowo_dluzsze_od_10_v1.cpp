#include <iostream>
using namespace std;

int main()
{
    string slowo;

    cout << "Podaj slowo do 10 liter: ";
    cin >> slowo;

    if(slowo.length() > 10)
    {
        cout << "Blad podane slowo ma ponad 10 liter!";
    }
    else
    {
        cout << "Podales slowo do 10 liter!";
    }


    return 0;
}
