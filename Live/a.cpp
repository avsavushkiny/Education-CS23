//hello
#include <iostream>
using namespace std;

int main()
{
    int num; 

    cin >> num;
    
    int *n = new int[num];

    for (int i = 0; i < num; i++)
    {
        cin >> n[i];
    }

    for (int i = 0; i < num; i+=2) // i = i + 2
    {
        cout << n[i];
    }

    delete [] n;
    
    return 0;
}