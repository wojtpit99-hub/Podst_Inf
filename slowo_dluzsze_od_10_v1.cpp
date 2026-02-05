#include <iostream>
#include <string>

using namespace std;

int main() {
    string slowo;

    cout << "Podaj slowo: ";
    cin >> slowo;

    if (slowo.length() > 10) {
        cout << "Blad: slowo ma powyzej 10 liter." << endl;
        return 1;
    }

    cout << "Wprowadzone slowo to: " << slowo << endl;

    return 0;
}
