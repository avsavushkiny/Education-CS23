#include <iostream>
using namespace std;

int main()
{
    struct Empl
    {
        int number;
        int all;
    };

    Empl book = {158, 350};

    cout << sizeof(book);
}