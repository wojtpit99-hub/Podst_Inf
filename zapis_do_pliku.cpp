#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file ("plik.txt", ios::app);
    
    if(file.is_open())
    {
        file << "test" << endl;
        file << "test2" << endl;
        file << "test3" << endl;
        
        file.close();
        cout << "Udalo sie zapisac plik.";
    }

    else
    {
        cout << "Wystapil blad podczas otwierania pliku.";
    }
    
    return 0;
}
