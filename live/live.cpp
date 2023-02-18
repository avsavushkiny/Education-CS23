//hello :)
//theme array

#include <iostream>
using namespace std;

int main()
{
    int w{};
    int aa[5] = {1, 3, -5, -8, 4};

    for(int i = 0; i < 5; i = i + 1)
    {
        if (aa[i] > 0)
        {
            w = w + 1;
        }
    }
    cout << w;
}







