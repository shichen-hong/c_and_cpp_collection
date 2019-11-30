#include <stdio.h>
#include <string.h>

void testArr(const char *str)
{
    printf("%lu %lu\n", sizeof(str), strlen(str));
}

int main(int argc, char *argv[])
{
    char str[] = "hello";
    printf("test0 %lu %lu\n\n", sizeof(str), strlen(str));
    char str1[8] = "hello";
    printf("test1 %lu %lu\n\n", sizeof(str1), strlen(str1));
    char str2[8] = {'h', 'e', 'l', 'l', 'o'};
    printf("test2 %lu %lu\n\n", sizeof(str2), strlen(str2));
    char *str3 = "hello";
    printf("test3 %lu %lu\n\n", sizeof(str3), strlen(str3));
    char str4[] = "hello";
    testArr(str4);
    char str5[] = "hell\0o";
    printf("test5 %lu %lu\n", sizeof(str5), strlen(str5));
    char str6[10] = {0};
    printf("test6 %lu %lu\n\n", sizeof(str6), strlen(str6));
    char str7[5] = "hello";
    printf("test7 %lu %lu\n\n", sizeof(str7), strlen(str7));
    char str8[5] = {0};
    strncpy(str8, "hello", 5);
    printf("%s\n", str8);
    return 0;
}