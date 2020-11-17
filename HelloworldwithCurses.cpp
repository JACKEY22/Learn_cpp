#include <iostream>
#include <ncurses.h>
using namespace std;

int main() {
    initscr();
    printw("Hello Ncurse!");
    refresh();
    getch();
    endwin();
    return 0;
}
