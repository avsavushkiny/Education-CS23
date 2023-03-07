#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> d;
    int i = 0;

    while (i != 6)
    {
        int a; cin >> a;

        d.push(a); i++;
    }

    if (d.empty()) cout << "Stack NULL";

    cout << d.top() << endl;

    return 0;
}