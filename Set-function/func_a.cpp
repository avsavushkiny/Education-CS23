#include <iostream>

int min();

int main()
{
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