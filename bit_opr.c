#include <stdio.h>

int main(int argc, char **argv)
{
    int a = 300;
    int y = 128;
    int x = a - y;
    printf("%d\n", x);
    x = x >> 63;
    printf("%d\n", x);
    x = ~x;
    printf("%d\n", x);
    int z = x & a;
    printf("%d\n", z);
}