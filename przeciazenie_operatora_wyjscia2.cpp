#include <iostream>
using namespace std;

class klasa {
public:
    int x;
};

ostream& operator<<(ostream& out, const klasa& obj) {
    out << obj.x;
    return out;
}

int main() {
    klasa obj;
    obj.x = 42;
    cout << obj << endl;
    return 0;
}
