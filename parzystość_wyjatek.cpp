#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Podaj dowolna liczbe: " << endl; 
    cin >> a;
    
    try
    {
        if(a % 2 != 0)
        {
            throw 404;
        }
        else
        {
            cout << "Liczba jest parzysta!" << endl;
        }
    }
    catch(int e)
    {
        cout << "ERROR " << e << endl;
    }

    return 0;
}
