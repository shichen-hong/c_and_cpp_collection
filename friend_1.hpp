#ifndef _FRIEND_1
#define _FRIEND_1

#include <iostream>
#include <string>

using namespace std;

class Box
{
private:
    double width;

public:
    Box() { width = 0; }
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

/* 
BoxFriend is a friend class of Box
it can access any member of Box 
*/

class BoxFriend
{
private:
    double height;

public:
    void showLengthBox(Box b);
};

void BoxFriend::showLengthBox(Box b)
{
    cout << "I am friend of box. The width of box is: " << b.width << endl;
}

#endif