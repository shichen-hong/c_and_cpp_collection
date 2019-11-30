#include <iostream>
#include <string>

using namespace std;

class Box
{
    double width;

public:
    double length;
    void setWidth(double w);
    friend void printWidth(Box myBox);
    friend class BoxFriend;
};

void Box::setWidth(double w)
{
    width = w;
}

void printWidth(Box myBox)
{
    // printWidth is no the memeber function of any class
    // It is the friend function of Box, can visit any member of Box
    cout << "Width of box : " << myBox.width << endl;
}
