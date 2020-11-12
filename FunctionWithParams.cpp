#include <iostream>
using namespace std;

int max(int num_first, int num_second){
    int result;
    if (num_first > num_second) result = num_first;
    else    result = num_second;
    return result;
}

int main(){
    int first = 100, second = 200, result;
    result = max(first,second);
    cout << "Max Value is : " << result << endl;
    cout << "Max Value is : " << max(second, first) << endl;
    return 0;
}
