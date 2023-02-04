#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; ++i) cin >> v[i];
    
    for (const int &i : v) if (i % 2 == 0) cout << i << " ";
}