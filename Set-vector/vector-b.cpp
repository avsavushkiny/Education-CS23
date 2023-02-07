#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v(3);

    v[0] = 72;
    v[1] = 73;
    v[2] = 33;

    v.push_back(7);

    cout << v.front() << endl;
    cout << v.back() << endl;
    cout << v.at(2) << endl;
    cout << v.size() << endl;

    return 0;
}