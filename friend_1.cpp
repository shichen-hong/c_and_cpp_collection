#include "friend_1.hpp"

int main(int argc, char **argv)
{
    Box myBox;
    double w = 12.0;
    myBox.setWidth(w);
    printWidth(myBox);

    return 0;
}