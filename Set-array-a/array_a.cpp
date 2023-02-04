/* Set Array (A)*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num, i;
    cin >> num;

    int *arr = new int[num];

    for (i = 0; i < num; ++i) cin >> arr[i];
    
    for (i = 0; i < num; i += 2)
    {
        cout << arr[i] << " ";
    }
    return 0;
}