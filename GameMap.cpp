#include <iostream>
#include <string>
#include <curses.h>

int main()
{
    using namespace std;
    WINDOW *w; // struct WINDOW w
    w = initscr();
    curs_set(0);
    int max_y = LINES - 1, max_x = COLS - 1;

    int i, j;
    for (i == 0; i < LINES; ++i){
        for (j == 0; j < COLS; ++j)
        {
            if (i > 0 && i < max_y)
            {
                mvaddch(i, 0, '*');
                mvaddch(i, max_x, '*');
            }
            else
            {
                mvaddch(i, j, '*');
            }
        }
    }

    string start_message = "Game Start";
    mvaddstr(max_y / 2, max_x / 2, start_message.c_str());

    getch();
    endwin();
    return 0;
}