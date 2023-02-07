#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(10);

    for (int i = 0; i < v.size(); i++)
        v.at(i) = i;

    cout << "myvector contains:";

    for (int i = 0; i < v.size(); i++)
        cout << ' ' << v.at(i);
    cout << '\n';

    return 0;
}