#include <iostream>
#include <string>
#include <curses.h>

#define PLAYER '@'
#define WALL 'W'
#define OPPONENT 'O'
#define E_TRACE 'H'

struct Player{
    static const int shape_size_y = 2, shape_size_x = 2;
    void appear(const int& move_y, const int& move_x){
        mvaddstr(move_y, move_x, "@@");
        mvaddstr(move_y + this->shape_size_y - 1, move_x, "||");
    }
};

int is_move_okay(int y, int x) {
    int compare_ch;
    compare_ch = mvinch(y,x);
    return !((compare_ch == WALL || compare_ch == OPPONENT));
}

int main(void) {
    using namespace std;
    WINDOW *w; // struct WINDOW w
    w = initscr();
    curs_set(0);
    int max_y = LINES-1, max_x = COLS-1;

    keypad(stdscr, TRUE);
    int y = LINES-1, x= COLS-COLS, move_x = 0, move_y = 0;
    int ch = 'y';
    Player player01;
    while ((ch != 'q') && (ch != 'Q')) {
        mvaddch(++move_y, ++move_x, OPPONENT); 
        mvaddch(y, x, PLAYER); mvaddch(10, 5, WALL); mvaddch(11, 5, OPPONENT);
        ch = getch();
        player01.appear(y,x);
        switch (ch)
        {
        case KEY_UP:
        case 'w':
            if(is_move_okay(y-1,x)){y = y - 1;}; break;
        case KEY_DOWN:
        case 's':
            if(is_move_okay(y+1,x)){y = y + 1;}; break;
        case KEY_LEFT:
        case 'a':
            if(is_move_okay(y,x-1)){x = x - 1;}; break;          
        case KEY_RIGHT:
        case 'd': 
            if(is_move_okay(y,x+1)){x = x + 1;}; break; // mvaddch(y, x-1, E_TRACE);
        }
    }
    endwin();
    return 0;
}