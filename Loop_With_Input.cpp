#include <iostream>
using namespace std;


int get_num(){
    int num;
    cout << "Input : num = ";
    cin >> num;
    return num;
}

//for loop
int main(){
    int first = get_num();
    int second = get_num();
    for(int startNum = first; startNum < second; ++first){
        cout << "Loop - " << first << endl;
        if (first == second){
            break;
        }
    }
    return 0;
}

//while loop
int main(){
    int first = get_num();
    int second = get_num();
    while(first <= second){
        cout << "Loop - " << first << endl;
        ++first;
    }
    return 0;
}