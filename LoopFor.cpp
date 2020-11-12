#include <iostream>
using namespace std;
// int Subfunction()
// {
//     for (int first = 10; first < 20; first = first + 1)
//     {
//         cout << "Value of first : " << first << endl;
//         if (first > 16)
//         {
//             break;
//         }
//     }
//     cout << "Final Value of first : " << first; 
//     return 0;
// }
// int main()
// {
//     int i = Subfunction();
//     return 0;
// }


int Subfunction()
{int first;
    for (first = 10; first < 20; first = first + 1)
    {
        cout << "Value of first : " << first << endl;
        if (first > 16)
        {
            break;
        }
    }
    cout << "Final Value of first : " << first; 
    return first;
}
int main()
{
    int i = Subfunction();
    return 0;
}