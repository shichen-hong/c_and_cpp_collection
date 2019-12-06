#include <stdio.h>

int my_func()
{
    printf("This is my test function\n");
    return 0;
}

int sum(int, int);

int (*fp_sum)(int, int);

typedef int (*fp_sum_2)(int, int);

int sum(int a, int b)
{
    printf("The sum of %zu and %zu is %i\n", a, b, a + b);
    return a + b;
}

int main(int argc, char *argv)
{
    my_func();
    fp_sum_2 f1 = sum;
    fp_sum_2 f2 = &sum;
    printf("%p\n", f1);
    printf("%p\n", f2);
    f1(1, 4);
    (*f2)(10, 20);
    return 0;
}