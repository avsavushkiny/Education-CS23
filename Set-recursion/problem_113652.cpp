/*Определить можно ли с использованием только операций
«прибавить 3» и «прибавить 5» получить из числа 1 число N
(N - натуральное, не превышает 200.

Разумеется, само число 1 получить можно, просто не применяя
никаких операций.*/

//problem #113652

#include <iostream>
using namespace std;

int can(int n)
{
    if (n < 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return ((can(n - 3)) || (can(n - 5)));
}

int main()
{
    int n;
    cin >> n;

    if (can(n) == 1)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}