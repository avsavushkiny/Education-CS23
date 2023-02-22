/*Определить можно ли с использованием только операций
«прибавить 3» получить из числа 1 число N
(N - натуральное, не превышает 200. 

Разумеется, само число 1 получить можно, просто не применяя
никаких операций.*/

#include <iostream>
using namespace std;

int can(int n)
{
    return (can(n - 3));
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