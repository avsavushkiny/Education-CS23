#include <iostream>
using namespace std;

double power(double a, int n)
{
    double pow = a;
    if (n == 0.0)
    {
        pow = 1;
    }
    else
    {
        for (int i = 1; i < n; i++)
            pow *= a;
    }
    return pow;
}
int main()
{
    int n;
    double a;
    cin >> a >> n;
    double b = power(a, n);
    cout << b;
    return 0;
}