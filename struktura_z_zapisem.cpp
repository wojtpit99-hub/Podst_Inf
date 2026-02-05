#include <iostream>
#include <fstream>
using namespace std;

struct Kontakty
{
    string imie;
    string nazwisko;
    int wiek;
    string telefon;
};

const int rozmiar = 2;
Kontakty tablica[rozmiar];

void WprowadzImie(int i)
{
    cout << "Podaj imie: ";
    cin >> tablica[i].imie;
}

void WprowadzNazwisko(int i)
{
    cout << "Podaj nazwisko: ";
    cin >> tablica[i].nazwisko;
}

void WprowadzWiek(int i)
{
    cout << "Podaj wiek: ";
    cin >> tablica[i].wiek;
}

void WprowadzTelefon(int i)
{
    cout << "Podaj numer telefonu: ";
    cin >> tablica[i].telefon;
}

void WprowadzDane(int i)
{
    WprowadzImie(i);
    WprowadzNazwisko(i);
    WprowadzWiek(i);
    WprowadzTelefon(i);
}

void WyswietlDane(int i)
{
    cout << "Imie: " << tablica[i].imie << " " << " Nazwisko: " << tablica[i].nazwisko << endl;
    cout << "Wiek: " << tablica[i].wiek << endl;
    cout << "Nr telefonu: " << tablica[i].telefon << endl;
}

void Zapis(int i)
{
    ofstream save ("Kontakty.txt", ios::app);
    save << "Imie: " << tablica[i].imie << " " << " Nazwisko: " << tablica[i].nazwisko << endl;
    save << "Wiek: " << tablica[i].wiek << endl;
    save << "Nr telefonu: " << tablica[i].telefon << endl;
    save.close();
}

int main()
{

    for(int i = 0; i < rozmiar; i++)
    {
        WprowadzDane(i);
        Zapis(i);
    }

    for(int i = 0; i < rozmiar; i++)
    {
        cout << "Kontakt nr: " << i+1 << endl;
        WyswietlDane(i);
    }

    return 0;
}
