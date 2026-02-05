#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Podaj dowolna liczbe: " << endl; 
    cin >> a;
    
    if(a % 2 == 0)
    {
        cout << "Liczba jest parzysta!" << endl;
    }

    else
    {
        cout << "Liczba nie jest parzysta!" << endl;
    }

    return 0;
}
