//education - Call stack

#include <iostream>
using namespace std;

void A(); void B(); void C();

int main()
{
    cout << "main() called.\n";
    A();
    cout << "main() returns.\n";

    return 0;
}

void A()
{
    cout << "  A() called.\n";
    B();
    cout << "  A() returns.\n";
}

void B()
{
    cout << "    B() called.\n";
    C();
    cout << "    B() returns.\n";
}

void C()
{
    cout << "      C() called.\n";
    cout << "      C() returns.\n";
}