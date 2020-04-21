#include <iostream>

int *insert_sort_down(int arr[], int len)
{
    for (int j = 1; j < len; j++)
    {
        int key = arr[j];
        int i = j - 1;
        while (i >= 0 && arr[i] > key)
        {
            arr[i + 1] = arr[i];
            i = i - 1;
        }
        arr[i + 1] = key;
    }
    int *result = arr;
    return result;
}

int main(int argc, char const *argv[])
{
    int arr[] = {99, 52, 43, 199, 89};
    int *result = insert_sort_down(arr, sizeof(arr) / sizeof(int));
    return 0;
}
