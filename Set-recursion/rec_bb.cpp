#include <iostream>
using namespace std;
int can(int n);

int main()
{
    int n{};
    cin >> n;

    if (can(n) == 1)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}

int can(int n)
{
    if (n == 1) return 1;
    else if (n < 0) return 0;
    else return (can(n - 3));
}