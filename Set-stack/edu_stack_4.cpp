#include <iostream>
using namespace std;

int main()
{
    int steck[6];
    int i = -1;
    string text{};

    while (1)
    {
        cin >> text;

        if (text == "push")
        {
            i++;
            cin >> steck[i];
            cout << "плюс один элемент" << endl;
        }

        if (text == "pop")
        {
            i--;
            cout << "минус один элемент" << endl;
        }

        if (text == "top")
        {
            cout << "вершина стека" << steck[i] << endl;
        }

        // проверка стека - не полный или полный
        if (i == -1)
            cout << "Stack NULL";

        if (i == 6)
        {
            cout << "Stack FULL";
            return 1;
        }

        // выводим то что находится в стеке сейчас - вершина стека
        cout << steck[i];
    }

    return 0;
}