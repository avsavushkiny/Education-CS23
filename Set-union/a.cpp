#include <iostream>
using namespace std;

struct C
{
    int intValue;
    float floatValue;
    string text;
} c;

union D
{
    int intValue;
    float floatValue;
    string text;
} d;

int main()

{
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;
}