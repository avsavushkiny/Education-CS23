#pragma once

#include <iostream>
using namespace std;

class ioType
{
private:
public:
    int get_int(string text)
    {
        int result{};
        cout << text << endl;
        cin >> result;

        return result;
    }

    char get_char(string text)
    {
        char result{};
        cout << text << endl;
        cin >> result;

        return result;
    }

    double get_double(string text)
    {
        double result{};
        cout << text << endl;
        cin >> result;

        return result;
    }
};

ioType cs;