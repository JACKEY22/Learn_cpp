#include <iostream>
using namespace std;

template <typename T>
T const Max(T const first, T const second){
    return first < second ? second : first;
};

int main() {
    int int_first = 10; int int_second = 20;
    cout << "Max(int_first, int_second) : " << Max(int_first, int_second) << endl;
    double double_first = 10.5; double double_second = 20.5;
    cout << "Max(int_first, int_second) : " << Max(double_first, double_second) << endl;
    string string_first = "Hello"; string string_second = "apple";
    cout << "Max(int_first, int_second) : " << Max(string_first, string_second) << endl;   
    bool bool_first = true; bool bool_second = false;
    cout << "Max(int_first, int_second) : " << Max(bool_first, bool_second) << endl;   
  
}