#include <iostream>
#include <cstring>
using namespace std;

struct Book {
    char title[50], author[50];
    string subject;
    int book_id;
};

struct Books
{
    struct Book BookList[5]; string category;
    void print_booklist() {
        for (int i = 0; i < 5; ++i) {
            cout << i << "." << BookList[i].title << endl;
        }
    };
};

enum categories { COMPUTERS, ARTS, BUSINES, };

int main() {
    struct Books BestSell;
    BestSell.category = categories::COMPUTERS;

    strcpy(BestSell.BookList[0].title, "Learn C++");
    strcpy(BestSell.BookList[0].author, "Allen");
    BestSell.BookList[0].subject = "C++";
    BestSell.BookList[0].book_id = 101;

    strcpy(BestSell.BookList[1].title, "Learn JAVA");
    strcpy(BestSell.BookList[1].author, "Bob");
    BestSell.BookList[1].subject = "JAVA";
    BestSell.BookList[1].book_id = 102;
    
    strcpy(BestSell.BookList[2].title, "Learn Python");
    strcpy(BestSell.BookList[2].author, "Cindy");
    BestSell.BookList[2].subject = "Python";
    BestSell.BookList[2].book_id = 103;

    strcpy(BestSell.BookList[3].title, "Learn Ruby");
    strcpy(BestSell.BookList[3].author, "Dan");
    BestSell.BookList[3].subject = "Ruby";
    BestSell.BookList[3].book_id = 104;

    strcpy(BestSell.BookList[4].title, "Learn MongoDB");
    strcpy(BestSell.BookList[4].author, "Finold");
    BestSell.BookList[4].subject = "MongoDB";
    BestSell.BookList[4].book_id = 105;

    BestSell.print_booklist();

    return 0;
}
