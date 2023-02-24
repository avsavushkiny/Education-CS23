// education - Fibonacci
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144

#include <iostream>
using namespace std;

int fib(int n);

int main()
{
    cout << fib(12);
}

int fib(int n)
{
    if (n == 0) return 0;
    else if (n == 1) return 1;

    return (fib(n - 1) + fib(n - 2));
}