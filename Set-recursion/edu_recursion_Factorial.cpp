// education - Factorial
// n! = 1 * 2 * 3 * ... * n

#include <iostream>
using namespace std;

int recursionFactorial(int n);
int cycleFactorial(int nn);

int main()
{
    // cout << cycleFactorial(5);
    // cout << recursionFactorial(5);
}

int recursionFactorial(int n)
{
    if (0 == n)
        return 1;

    return recursionFactorial(n - 1) * n;
}

int cycleFactorial(int nn)
{

    int fact{1};

    for (int i = 1; i <= nn; ++i)
    {
        fact *= i;
    }

    return fact;
}