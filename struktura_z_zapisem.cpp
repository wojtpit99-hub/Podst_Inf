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

const int zakres = 2;
Kontakty tablica[zakres];

wprowadzImie(int i)
{
    cout << "Imie: "; //<< tablica[i].imie << endl;
    cin >> tablica[i].imie;
}

wprowadznazwisko(int i)
{
    cout << "Nazwisko: ";
    cin >> tablica[i].nazwisko;
}

wprowadzWiek(int i)
{
    cout << "Wiek: ";
    cin >> tablica[i].wiek;
}

wprowadzTelefon(int i)
{
    cout << "Telefon: ";
    cin >> tablica[i].telefon;
}

wprowadzDane(int i)
{
wprowadzImie(i);
wprowadznazwisko(i);
wprowadzWiek(i);
wprowadzTelefon(i);

}

wyswietlDane(int i)
{
    cout << "Imie: " << tablica[i].imie << endl;
    cout << "Nazwisko: " << tablica[i].nazwisko << endl;
    cout << "Wiek: " << tablica[i].wiek << endl;
    cout << "Telefon: " << tablica[i].telefon << endl;
}
Zapis(int i)
{
ofstream save ("tablica.txt", ios::app);
save << "Imie: " << tablica[i].imie << endl;
save << "Nazwisko: " << tablica[i].nazwisko << endl;
save << "Wiek: " << tablica[i].wiek << endl;
save << "Telefon: " << tablica[i].telefon << endl;
}

int main()
{
    for(int i=0; i<zakres; i++)
        {
            wprowadzDane(i);
            Zapis(i);
        }
    for(int i=0; i<zakres; i++)
    {
        wyswietlDane(i);
    }
    return 0;
}

