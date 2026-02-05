#include <iostream>

using namespace std;
int liczba;

int main() {

    cout << "Podaj liczbe: ";
    cin >> liczba;

    if (liczba % 2 == 0) {
        cout << liczba << " jest liczba parzysta" << endl;
    } else {
        cout << liczba << " jest liczba nieparzysta" << endl;
    }

    return 0;
}
