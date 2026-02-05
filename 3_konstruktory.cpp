#include <iostream>
using namespace std;

class Obiekt
{
private:
    int x;
    int y;
public:
    // konstruktor bezargumentowy
    Obiekt()
    {
        cout << "Wywolales konstrukor bezargumentowy" << endl;
    }

    // konstruktor z jednym argumentem
    Obiekt(int wartosc)
    {
        x = wartosc;
        y = wartosc; 
        
        cout << "Wywolales konstruktor jednoargumentowy " << "Wartosc x: " << x << " Wartosc y: " << y << endl;
    }
    // konstruktor z dwoma argumentami
    Obiekt(int wartosc_x, int wartosc_y)
    {
        x = wartosc_x;
        y = wartosc_y;

        cout << "Wywolales konstruktor dwuargumentowy " << "Wartosc x: " << x << " Wartosc y: " << y << endl;
    }
};

int main()
{
    Obiekt obj0;
    Obiekt obj1(5);
    Obiekt obj2(10, 5);

    return 0;
}
