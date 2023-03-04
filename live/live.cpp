#include <iostream>
using namespace std;

class test
{
public:
    test() { cout << "Constructor of Test" << endl; }
    ~test() { cout << "Destructor of Test" << endl; }
};

int main()
{
    try
    {
        test t1;
        throw 10;
    }
    catch (int i)
    {
        cout << "Caught " << i << endl;
    }
}

/**/

try
{
    // protected code
}
catch (ExceptionName e1)
{
    // catch block
}
catch (ExceptionName e2)
{
    // catch block
}
catch (ExceptionName eN)
{
    // catch block
}

/**/

try
{
    // protected code
}
catch (ExceptionName e)
{
    // code to handle ExceptionName exception
}

/**/

try
{
    // protected code
}
catch (…)
{
    // code to handle any exception
}

/**/

#include <iostream>
using namespace std;

double division(int a, int b)
{
    if (b == 0)
    {
        throw "Division by zero condition!";
    }
    return (a / b);
}

int main()
{
    int x = 50;
    int y = 0;
    double z = 0;

    try
    {
        z = division(x, y);
        cout << z << endl;
    }
    catch (const char *msg)
    {
        cerr << msg << endl;
    }

    return 0;
}

/**/

#include <iostream>
using namespace std;

int main()
{
    int x = -1;

    // Some code
    cout << "Before try";
    try
    {
        cout << "Inside try";
        if (x < 0)
        {
            throw x;
            cout << "After throw (Never executed)";
        }
    }
    catch (int x)
    {
        cout << "Exception Caught";
    }

    cout << "After catch (Will be executed)";
    return 0;
}

/**/

#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 'a';
    }
    catch (int x)
    {
        cout << "Caught";
    }
    return 0;
}

/**/
#include <iostream>
#include <exception>
using namespace std;

struct MyException : public exception
{
    const char *what() const throw()
    {
        return "C++ Exception";
    }
};

int main()
{
    try
    {
        throw MyException();
    }
    catch (MyException &e)
    {
        cout << "MyException caught" << endl;
        cout << e.what() << endl;
    }
    catch (std::exception &e)
    {
        // Other errors
    }
}

/**/
#include <cmath> // for sqrt() function
#include <iostream>

int main()
{
    cout << "Enter a number:";
    double x{};
    cin >> x;

    try // Ищет исключения в блоке и направляет их к обработчику catch
    {
        // этот блок сработает, если пользователь ввел отрицательное число
        if (x < 0.0)
            throw «Can not take sqrt of negative number»; // throw выбрасывает исключение типа const char*

        // Если пользователь ввел число больше 0, то выполняется этот блок кода
        cout << "The sqrt of" << x << " is " << sqrt(x);
    }
    catch (const char *exception) // обработчик исключений типа const char*
    {
        cerr << "Error: " << exception;
    }
}
