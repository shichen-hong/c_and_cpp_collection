#include <stdio.h>
#include <stdint.h>

#pragma pack(1)
struct test
{
    char a;
    char b;
    int c;
};
#pragma pack()

int main(int argc, char const *argv[])
{
    
    printf("The size of the struct test is %d", sizeof(struct test));
    return 0;
}
