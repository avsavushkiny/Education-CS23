#include <iostream>
using namespace std;

int summa(int a, int b)
{
    if (a == 0) throw "error"; //создаем условие для выброса 
                               //throw бросил текст в catch
    else return a + b;
}

int main()
{
    try
    {
        summa(0, 3); //выполняем код
    }
    catch(const char* e) //catch ловит то что бросил throw
    {
        std::cerr << e << '\n';
    }
}