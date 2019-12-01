#include <stdio.h>

typedef struct point
{
    int x;
    int y;
    int z;
} Point;

typedef void *(*FunPtr)(int, int);

void *myFun(int a, int b)
{
    printf("The sum of the integers is: %d \n", a + b);
    return NULL;
}

int main(int argc, char *argv)
{
    Point myPoint;
    Point *myPointPtr = &myPoint;
    myPointPtr->x = 1;
    myPointPtr->y = 1;
    myPointPtr->z = 1;

    FunPtr aFun = myFun;
    aFun(1, 2);

    return 0;
}