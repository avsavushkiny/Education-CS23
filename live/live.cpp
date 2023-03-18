#include <iostream>
using namespace std;

int main()
{
    int v[6]; int k{-1};

    for(int i = 0; i < 6; i++) //push
    {
        cin >> v[i]; k++;
    }
    
    k++;

    if (k == 6)
    {
        cout << "stack FULL" << endl;
    }

    if (k == -1)
    {
        cout << "stack NULL" << endl;  
    }

    cout << v[k] << endl;      //top

    return 0;
}
