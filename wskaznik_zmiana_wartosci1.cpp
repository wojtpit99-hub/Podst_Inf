#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 15;

    int* wskaznik_a = &a;
    int* wskaznik_b = &b;

    cout << "Poczatkowe wartosci zmiennych: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    *wskaznik_a = 100;
    *wskaznik_b = -100;

    cout << "Zmienione wartosci zmienntch: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
