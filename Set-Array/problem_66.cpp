//problem #66

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n;
    
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            cout << a[i] << ' ';
            k++;
        }
    }

    cout << "\n" << k;
}