#include <iostream>

using namespace std;

class X
{
    public:
        virtual void egzamin(void) = 0;
};

class Y : public X
{
    public:
        void egzamin(void)
        {
            cout << "Klasa abstrakcyjna, która zdala mi egzamin" << endl;
        }
};

int main()
{

}
