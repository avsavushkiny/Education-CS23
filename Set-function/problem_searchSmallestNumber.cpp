//problem - Search for the smallest number

#include <iostream>
using namespace std;

int min(int a, int b, int c, int d);

int main()
{
    cout << min(10, 5, 2, 22) << endl;
}

int min(int a, int b, int c, int d)
{
    int m = a;
    if (b < m)
        m = b;
    if (c < m)
        m = c;
    if (d < m)
        m = d;

    return m;
}