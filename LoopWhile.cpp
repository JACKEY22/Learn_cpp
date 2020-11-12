#include <iostream>
using namespace std;
int Subfunction()
{
    int first = 10;
    while (first < 20)
    {
        cout << "Value of first : " << first << endl;
        ++first;
    }
    return first;
}

int main(){
    int i = Subfunction();
    cout << "Last Value of first : " << i << endl;
    return 0;
}
