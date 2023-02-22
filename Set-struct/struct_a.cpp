#include <iostream>
using namespace std;

struct Empl
{
    int age;
    int salary;
};

int main()
{
    Empl alexander {30, 20000};
    Empl sasha {14, 45000};

    cout << alexander.age << endl;
    cout << sasha.age << endl;
}