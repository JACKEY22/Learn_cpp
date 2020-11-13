#include <iostream>
using namespace std; 

int Addition(int first, int second) {
    int result = first + second;
    cout << "-----------------------------" << endl;
    cout << "+ Addition Result : " << result << endl;
    return result;
}

int Subtraction(int first, int second) {
    int result = first - second;
    cout << "+ Subtraction Result : " << result << endl;
    return result;
}

int Multiplication(int first, int second) {
    int result = first * second;
    cout << "+ Multiplication Result : " << result << endl;
    return result; 
}

int Division(int first, int second) {
    int result = first / second;
    cout << "+ Division Result : " << result << endl;
    cout << "-----------------------------" << endl;
    return result; 
}

void Calculation() {
    int first, second;
    cout << "Input : first = ";
    cin >> first;
    cout << "Input : second = ";
    cin >> second;
    Addition(first, second);
    Subtraction(first, second);
    Multiplication(first, second);
    Division(first, second);
}

char Loop_Question() {
    char respond; 
    cout << "Do you want to continue? (Y/N) : ";
    cin >> respond;
    return respond;
}


void Calculator() {
    while (1){
        Calculation();
        char respond = Loop_Question();
        if (respond == 'N'){
            break;
        }
    }
    cout << "End the Calculation !" << endl;
}

