#include <iostream>
using namespace std;

int main()
{
    string slowo;

    cout << "Podaj slowo: ";
    cin >> slowo;

    string odwrocone;

    for(int i = slowo.length(); i >= 0; i--)
    {
        odwrocone += slowo[i];
    }

    cout << "Twoje slowo od tylu to: " << odwrocone << endl;

    return 0;
}
