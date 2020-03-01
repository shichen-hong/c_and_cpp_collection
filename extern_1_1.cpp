#include <iostream>

extern "C"
{
#include "extern_1.h"
}

using namespace std;

int main(int argc, char *argv[])
{
    printf("%d", add(2, 3));
    return 0;
}
