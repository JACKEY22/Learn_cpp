#include <iostream>
#include <string>
#include <curses.h>
using namespace std;

int main() {
    WINDOW *w; // struct WINDOW w
    w = initscr();
    curs_set(0);
    int max_y = LINES-1, max_x = COLS-1;

    printw("Hello World!");
    move(3,4); addch('3'); mvaddch(5,4,'5');
    string str_var="max_y, max_x : " + to_string(LINES) + "," + to_string(COLS);
    mvaddstr(6, 4, str_var.c_str());
    mvprintw(max_y/2, max_x/2,"MIDDLE");
    mvaddch(max_y-1, max_x-1,'E');
    refresh();
    getch();

    endwin();   
    return 0;
}
