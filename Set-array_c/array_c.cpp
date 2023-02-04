#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n;
    k = 0;
    
    vector<int> a(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            k++;
        }
    }
    cout << k;
}