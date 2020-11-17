#include <iostream>
using namespace std;

int main() {
    int var = 20;
    int *ptr_first = &var;
    //ptr_first = &var;
    cout << "var : " << var << " address : " << &var << endl;
    cout << "ptr_first : " << ptr_first << " address : " << &ptr_first << endl;
    cout << "*ptr_first : " << *ptr_first << " address : " << &(*ptr_first) << endl;
    return 0;

}