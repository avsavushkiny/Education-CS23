//hello :)
//theme array

#include <iostream>
using namespace std;

int main()
{
    int w{}; int n{};
    cin >> n; int aa[n];

    for(int i = 0; i < n; i = i + 1)
    {
        cin >> aa[i];
    }
    for(int i = 0; i < n; i = i + 1)
    {
        if (aa[i] > 0)
        {
            w = w + 1;
        }
    }
    cout << w;
}