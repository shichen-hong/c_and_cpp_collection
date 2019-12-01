#include <stdio.h>

union color {
    char name_st;
    char name[20];
    int number;
    short number_st;
} * myColor;

int main(int argc, char *argv)
{
    union color red;
    red.name_st = 'r';
    printf("The size of the union is %zu\n", sizeof(red));

    myColor->name_st = 'b';
    printf("The size of the union is %zu\n", sizeof(myColor));

    union land {
        char name[20];
        char name_st;
    } deutschland;

    deutschland.name_st = 'd';
    return 0;
}