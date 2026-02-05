#include <iostream>

class A {
private:
    int x;
public:
    A(int x) : x(x) {}
    int getX() const { return x; }

    A operator+(const A& obj) const {
        return A(x + obj.x);
    }
};

A operator-(const A& obj1, const A& obj2) {
    return A(obj1.getX() - obj2.getX());
}

int main() {
    A obj1(10);
    A obj2(5);

    A result1 = obj1 + obj2;
    std::cout << "Wynik dodawania: " << result1.getX() << std::endl;

    A result2 = obj1 - obj2;
    std::cout << "Wynik odejmowania: " << result2.getX() << std::endl;

    return 0;
}

