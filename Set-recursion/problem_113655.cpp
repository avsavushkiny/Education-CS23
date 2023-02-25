//problem #113655

#include <iostream>
using namespace std;

int main()
{
    string s = "example"; // 7 chars
    int i{}, k{}, j{};

    i = s.length();       // 7

    while (k <= i)        // 1 <= 7 ...etc
    {
        s.insert(j, "*");
        j = j + 2; //cout << j << endl;
        k++;
    }
    cout << s;


    return 0;
}