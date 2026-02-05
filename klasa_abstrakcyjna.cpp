#include <iostream>
using namespace std;

class Wirtualna
{
public:
    virtual void egzamin() = 0;
};

class Klasa : public Wirtualna
{
public:
    void egzamin()
    {
        cout << "Jestem klasa abstrakcyjna" << endl;
    }
};


int main()
{
    Wirtualna* Obiekt = new Klasa();

    Obiekt->egzamin();
    return 0;
}
