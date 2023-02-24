//problem #113655

#include <iostream>
using namespace std;

int main()
{
    string s = "example";
    size_t i, k = 0, j = 0;

    i = s.length() / 2;
    while (k <= i)
    {
        s.insert(j, "(");
        s.insert(s.length() - j, ")");
        j += 2;
        k++;
    }
    if (s.find("()") != string::npos)
        s.erase(s.find("()"), 2);
    cout << s;
    return 0;
}

int insertChar(string text)
{
    int i = sizeof(text);

    
}