#include <stdio.h>

void array_size_in_func(const int *arri, const char *arrc)
{
    printf("The size of pointer is %d bytes\n", sizeof arri);
    printf("The size of pointer is %d bytes\n", sizeof arrc);
}

int main(int argc, char *argv)
{
    int a = 14;

    printf("The size of int a = %d is %d bytes\n", a, sizeof a);
    printf("The size of type int is %d bytes\n", sizeof(int));

    int arr[] = {1, 2, 3, 5, 8, 13};
    printf("The size of array arr is %d bytes\n", sizeof arr);
    array_size_in_func(arr, "Hello world");
}