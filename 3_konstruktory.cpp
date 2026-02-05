#include <iostream>

using namespace std;
class egzamin
{
public:
    int x, y;
    // konstruktor bezargumentowy
    egzamin()
    {
     cout << "Konstruktor bezargumentowy zostal wywolany" <<endl;
    }
    // konstruktor z jednym argumentem
    egzamin(int value)
    {
        x = value;
        y = value;
    }
    // konstruktor z dwoma argumentami
    egzamin(int x_value, int y_value)
    {
        x = x_value;
        y = y_value;
    }
};
int main()
{
    egzamin obj1;            // u¿ycie konstruktora bezargumentowego
    egzamin obj2(5);         // u¿ycie konstruktora z jednym argumentem
    egzamin obj3(2, 4);      // u¿ycie konstruktora z dwoma argumentami
    //cout << "obj1: x=" << obj1.x << ", y=" << obj1.y << endl;
    cout << "obj2: x=" << obj2.x << ", y=" << obj2.y << endl;
    cout << "obj3: x=" << obj3.x << ", y=" << obj3.y << endl;

    return 0;
}
