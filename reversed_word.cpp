#include <iostream>
#include <string>

using namespace std;

int main()
{
    string slowo, reversed = "";

    cout << "Podaj slowo: ";
    cin >> slowo;

    int dlugosc_slowa = slowo.length();
    for (int i = dlugosc_slowa - 1; i >= 0; i--) {
        reversed += slowo[i];
    }

    cout << "Slowem odwroconym jest: " << reversed << endl;

    return 0;
}
