#include <iostream>
using namespace std;

int Subfuction()
{
    int first = 100;
    if (first == 10)
    {
        cout << "Value of first is 10" << endl;
    }
    else if (first == 30)
    {
        cout << "Value of first is 30" << endl;
    }
    else
    {
        cout << "Value of first is not matching" << endl;
    }
    return first;
}

int main()
{
    int i = Subfuction();
    cout << "first of Subfunction is "<< i << endl;
    return 0;
}