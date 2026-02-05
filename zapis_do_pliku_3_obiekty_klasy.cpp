#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Person {
public:
    string name;
    int age;

    Person() : name(""), age(0) {}
    Person(string name, int age) : name(name), age(age) {}
};

int main() {
    Person p1("John Doe", 30);
    Person p2("Jane Doe", 25);
    Person p3("Bob Smith", 45);

    ofstream outFile("persons.txt");
    if (outFile.is_open()) {
        outFile << p1.name << " " << p1.age << endl;
        outFile << p2.name << " " << p2.age << endl;
        outFile << p3.name << " " << p3.age << endl;
        outFile.close();
        cout << "Zapis do pliku udany." << endl;
    } else {
        cout << "Error: Nie udalo sie otworzyc pliku." << endl;
    }

    return 0;
}

