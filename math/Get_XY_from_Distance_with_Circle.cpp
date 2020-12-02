#include <iostream>
#include <math.h>
#define PI 3.14159265358979323846

using namespace std;
typedef double custem_t;

custem_t degreetoradian(custem_t degree)
{
    return ((PI / 180) * degree); // PI/180 = 1c
}

int main(int argc, char **argv)
{
    if (argc <= 1)
    {
        cout << "You have entered " << argc << " arguments" << endl;
        return -1;
    }
    custem_t current_x = 10, current_y = 20, distance = 30;
    custem_t radian = degreetoradian(std::stoi(argv[1])); // string to int
    custem_t target_x = current_x + distance * cos(radian);
    custem_t target_y = current_y + distance * sin(radian);
    cout << "target X : " << target_x << ", target Y : " << target_y << endl;
    return 0;
}
