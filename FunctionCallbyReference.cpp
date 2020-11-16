#include <iostream>
using namespace std;

void swap(int x, int y) {
    int temp; 
    temp = x;  
    x = y; 
    y = temp;
}

void swapbyreference(int &x, int &y) {
    int temp; 
    temp = x;  
    x = y; 
    y = temp;
}
int main() {
    int first = 100, second = 200;
    cout << "Before swap - first, second : " << first << "," << second << endl;
    swap(first, second);
    cout << "After swap - first, second : " << first << "," << second << endl;

    swapbyreference(first, second);
    cout << "Afrer swap by reference - first, second : " << first << "," << second << endl;
    return 0;

    

}

