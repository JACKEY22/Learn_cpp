#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int random_num() {
    srand((unsigned int)time(NULL));
    int num = (rand() % 100) + 1;
    return num;
}

int Get_num() {
    int num;
    cin >> num;
    return num;
}

char Get_ch() {
    char ch;
    cin >> ch;
    return ch; 
}

struct Character
{
    int point_x;
    int point_y;
    int movement;

    int health;
    int damage;
    char survival;

    char display;

};

int Set_hero() {
    struct Character Hero;
    Hero.point_x = Get_num(); 
    Hero.point_y = Get_num();  
    Hero.movement = Get_num();

    Hero.health = Get_num();
    Hero.damage = Get_num();
    Hero.survival = 'Y';        

    Hero.display = '@'; 
   
    return 0;
}
