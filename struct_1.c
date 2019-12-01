#include <stdio.h>
#include <stdint.h>

struct test
{
    int a;
    char b;
    int c;
    short d;
};

struct test_aligned
{
    int a;
    char b;
    short d;
    int c;
};

struct test_aligned_manual
{
    int a;
    char b;
    char reserve[3];
    int c;
    short d;
    char reserve1[2];
};

#pragma pack(1) /* Alignment by 1 byte */
struct test_aligned_1_byte
{
    int a;
    char b;
    int c;
    short d;
};
#pragma pack()

struct test_aligned_1_byte_2
{
    int a;
    char b;
    int c;
    short d;
} __attribute__((packed));

struct test_aligned_set
{
    int a;
    char b;
    int c;
    short d;
} __attribute__((aligned(4)));

int main(int argc, char *argv)
{
    printf("The size of the struct test is %zu\n", sizeof(struct test));
    printf("The size of the struct test_aligned is %zu\n", sizeof(struct test_aligned));
    return 0;
}
