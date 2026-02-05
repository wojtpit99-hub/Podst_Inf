#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;

    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;

    int* wsk_a = &a; // wskaŸnik na zmienn¹ a
    int* wsk_b = &b; // wskaŸnik na zmienn¹ b

    cout << "Przed zmiana:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    *wsk_a = 30; // zmiana wartoœci zmiennej a przez wskaŸnik
    *wsk_b = 40; // zmiana wartoœci zmiennej b przez wskaŸnik

    cout << "Po zmianie:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}


