#include <iostream>
using namespace std;

int main() {
    char grade = 'B';
    switch (grade)
    {
    case 'A':
        cout << "Exellent!" << endl;
        break;
    case 'B':
        cout << "Good!" << endl;
        break;
    case 'C':
        cout << "Well done" << endl;
        break;
    
    default:
        cout << "Invalid grade" << endl;
    }
    return 0;

}