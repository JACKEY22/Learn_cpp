#include <iostream>
#include <curses.h>
using namespace std;

int main() {
    WINDOW *w;
    w = initscr();
    curs_set(0);
    printw("Hello Ncurse!");
    refresh();
    getch();
    endwin();
    return 0;
}
