#include <iostream>
using namespace std;

int main()
{
    char s[120];

    cin >> s;

    for (int i = 0; i < 120; i++)
    {
        if (s[i] == ' ')
        {
            s[i] = '+';
        }
    }
    cout << s << endl;
}