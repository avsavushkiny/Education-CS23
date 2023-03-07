#include <iostream>
using namespace std;

int main()
{
    int steck[6];
    int i = -1;

    for (int j = 0; j < 6; j++)
    {
        int a;
        cin >> a; i++;
        steck[i] = a;
    }

    if (i == -1) cout << "Stack NULL";

    i++;
    cin >> steck[i];

    cout << steck[i];

    return 0;
}