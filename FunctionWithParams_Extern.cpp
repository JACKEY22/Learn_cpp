#include <iostream>
#include "FunctionWithParams_Ref.cpp"
using namespace std;

extern int max(); // ? extern int max(params);
extern int get_num();

int main(){
    
    int first = get_num();
    int second = get_num();
    cout << "Max Value is : " << max(second, first) << endl;

    // int result;
    // result = max(first, second);
    // cout << "Max Value is : " << result << endl;
    
    return 0;
}
