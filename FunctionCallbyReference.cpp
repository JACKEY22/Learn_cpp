#include <iostream>
using namespace std;

void swap(int x, int y) {
    int temp;                           
    temp = x;                       // temp = 100
    x = y;                          // x = 200;
    y = temp;               
    cout << &x << endl;
}

void swapbyreference(int &x, int &y) {
    int temp; 
    temp = x;  
    x = y; 
    y = temp;
    cout << &x << endl;
}
int main() {
    int first = 100, second = 200;
    cout << "Before swap - first, second : " << first << "," << second << " &first : " << &first << endl;
    swap(first, second);
    cout << "After swap - first, second : " << first << "," << second << " &first : " << &first << endl;

    swapbyreference(first, second);
    cout << "Afrer swap by reference - first, second : " << first << "," << second << endl;
    return 0;

    

}

