#include <iostream>
#include <string>
#include <curses.h>

int main()
{
    using namespace std;
    WINDOW *w; 
    w = initscr();
    int max_y = LINES - 1, max_x = COLS - 1;

    
    
    getch();
    endwin();

    return 0;
}