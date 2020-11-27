#include <iostream>
using namespace std;

class Box
{
public:
    Box(double length = 2.1, double breadth = 3.1, double height = 4.1)
    {
        this->length = length;
        this->breadth = breadth;
        this->height = height;
    };
    double getVolume() { return length * breadth * height; };

private:
    double length;
    double breadth;
    double height;
};

int main()
{
    Box Box1(2.2, 3.2);
    Box Box2(8.5, 6.3, 2.0);
    // Box *ptrBox;
    // ptrBox = &Box1;
    Box *ptrBox = &Box1;
    cout << "getVolume of Box1: " << ptrBox->getVolume() << endl;
    ptrBox = &Box2;
    cout << "getVolume of Box2: " << ptrBox->getVolume() << endl;
    return 0;
}