#include <iostream>
#include <fstream>
using namespace std;

class Osoba
{
public:
    string imie;
    string nazwisko;
    int wiek;

    Osoba() : imie(""), nazwisko(""), wiek(0) {}
    Osoba(string imie, string nazwisko, int wiek) : imie(imie), nazwisko(nazwisko), wiek(wiek) {}
};


int main()
{
    Osoba o1("Wojciech", "Kozmicki", 20);
    Osoba o2("Marta", "Kozlowska", 25);
    Osoba o3("Marcin", "Myszka", 44);

    ofstream file ("dane.txt", ios::app);
    if(file.is_open())
    {
        file << "Imie i nazwisko: " << o1.imie << " " << o1.nazwisko << " Wiek: " << o1.wiek << endl;
        file << "Imie i nazwisko: " << o2.imie << " " << o2.nazwisko << " Wiek: " << o2.wiek << endl;
        file << "Imie i nazwisko: " << o3.imie << " " << o3.nazwisko << " Wiek: " << o3.wiek << endl;
        file.close();

        cout << "udalo sie zapisac dane.";
    }
    else
    {
        cout << "nie udalo sie otworzyc pliku.";
    }


    return 0;
}
