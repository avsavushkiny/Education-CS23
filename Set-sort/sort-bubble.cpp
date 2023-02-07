#include <iostream>
using namespace std;

int main()
{
    //          0   1  2  3  4
    int a[] = {45, 78, 1, 5, 25}; // size 5

    for (int j = 0; j < size(a); j++)
    {
        for (int i = 0; i < size(a) - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                int x = a[i + 1];
                        a[i + 1] = a[i];
                                   a[i] = x;

            }
        }
    }

    cout << "result " << endl;
    for (int i = 0; i < size(a); i++)
    {
        cout << a[i] << " ";
    }
     
    return 0;
}