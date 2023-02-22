#include <iostream>
using namespace std;

struct Empl
{
    string name;
    int age;
    int salary;
};

int main()
{
    Empl it {"Alex" ,30, 20000};

    cout << it.name << endl;
}