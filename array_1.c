#include <stdio.h>

size_t arraySum(const int arr[], int length)
{
    unsigned int loop = 0;
    int sum = 0;
    if (NULL == arr)
    {
        return 0;
    }
    else
    {
        for (loop = 0; loop < length; loop++)
        {
            sum += arr[loop];
        }
        return sum;
    }
}

int main(int argc, char *argv[])
{
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    int *ptr = (int *)(&a + 1);
    printf("%d, %d \n", *(a + 1), *(ptr - 1));
    printf("The length of array: %d\n", sizeof(a) / sizeof(int));

    int sum = arraySum(a, sizeof(a) / sizeof(int));
    printf("The length of array calcuated by function is: %d \n", sum);
    return 0;
}