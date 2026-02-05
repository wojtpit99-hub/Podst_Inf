#include <iostream>

using namespace std;

int main()
{
    int tab[5][5];

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(i==j) 
            {
                tab[i][j] = i+j;
            }
            else if (i > j)
            {
                tab[i][j] = 1;
            }
            else
            {
                tab[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
           cout << tab[i][j] << " ";
        }
        cout << endl;
    }


return 0;
}
