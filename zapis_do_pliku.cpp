#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file("data.txt", ios::app);

    if (file.is_open())
        {
        file << "Mam" << endl;
        file << "nadzieje, " << endl;
        file << "ze zdalem" << endl;

        file.close();
        std::cout << "Zapisano pomyslnie." << std::endl;
    } else {
        std::cout << "Blad podczas otwierania pliku." << std::endl;
    }

    return 0;
}

