#include <iostream>
#include <cstring>
using namespace std;

struct Book{
    string subject;
    char author[50];
};

void printBook( struct Book *book) {
    cout << "printBook subject : " << book->subject << endl;
    book->subject = "Changed";
}

int main() {
    struct Book Book1;
    struct Book Book2;

    Book1.subject = "C++";
    strcpy(Book1.author, "Allen");
    cout << "Book 1 subject : " << Book1.subject << endl;
    
    printBook(&Book1);
    cout << "Book 1 subject : " << Book1.subject << endl;
    return 0;
}