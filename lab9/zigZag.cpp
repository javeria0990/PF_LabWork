#include <iostream>
using namespace std;

int main()
{
    int array[3][3] = {{1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9}};
    int x = 2;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i % 2 == 0)
            {
                cout << array[i][j] << " ";
            }
            else
            {
                cout << array[i][x] << " ";
                x--;
            }
        }
    }
}
