#include <iostream>

using namespace std;

class klasa {
private:
    int x, y;
public:
    klasa(int a, int b) : x(a), y(b) {}
    friend ostream& operator<<(ostream& os, const klasa& obj) {
        os << "x: " << obj.x << ", y: " << obj.y;
        return os;
    }
};

int main() {
    klasa obj(5, 10);
    cout << obj << endl;
    return 0;
}
