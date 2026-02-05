#include <iostream>

using namespace std;

int main()
{
    int tablica[5][5];
    for(int i=0; i<5; i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i==j)
            {
                tablica[i][j]=i+j;
            }
            else if(i<j)
            {
                tablica[i][j]=0;
            }
            else
            {
                tablica[i][j]=1;
            }
        }
    }
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5;j++)
        {
            cout << tablica[i][j] << " ";
        }
        cout << "COZAG00wno" << endl;
    }

    return 0;
}
