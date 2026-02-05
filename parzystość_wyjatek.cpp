#include <iostream>

using namespace std;



int main()
{
    int liczba;
    cout << "Podaj liczbe: " << endl;
    cin >> liczba;

    try{

    if(liczba % 2 !=0)
    {
        throw 404;
    }
    }
    catch(int e){
    cout << "ERROR: " << e << endl;
    }

    return 0;
}
