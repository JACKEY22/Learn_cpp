#include <iostream>
using namespace std;

double division(int a, int b)
{
    int result = 0;
    try
    {
        if (b == 0)
        {
            throw "Division by zero condition!";
        }
        result = a / b;
    }
    catch (const char *msg)
    {
        cout << "Exception caught:" << msg << endl;
    }
    catch (std::exception msg1)
    {
        cout << "caught in main():" << msg1.what() << endl;
    }
    return result;
}

int main()
{
    try
    {
        double third = division(10, 0);
        cout << "Exception caught in try : " << third << endl;
        return -1;
    }
    catch (std::exception msg)
    {
        cout << "Exception caught in main()" << msg.what() << endl;
        return -1;
    }
    return 0;
}