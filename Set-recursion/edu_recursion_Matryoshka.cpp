//education - recursion Matryoshka

#include <iostream>
using namespace std;

void matryoshka(int n);

int main()
{
    matryoshka(7);

    return 0;
}

void matryoshka(int n)
{
    if (n == 1)
        cout << "Last matryoshka!!! " << n << endl;
    else
    {
        cout << "Top side of matryoshka " << n << endl;
        matryoshka(n - 1);
        cout << "Bottom side of matryoshka " << n << endl;
    }
}