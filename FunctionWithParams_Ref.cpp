#include <iostream>
using namespace std;

int get_num(){
    int num;
    cout << "input num : ";
    cin >> num;
    return num;
}

int max(int num_first, int num_second){
    int result;
    
    if (num_first > num_second) result = num_first;
    else    result = num_second;
    return result;
}