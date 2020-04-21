#include <stdio.h>
#include <iostream>
using namespace std;

int count;

void Log(const char *message){
    // printf("%s", message);
    cout << message << endl;
}

int getFib(int pos){
    int num_1, num_2, res;
    if (pos > 100){
        cout << "Don't exceed 100" << endl;
        return -1;
    }
    else {
        num_1 = 1;
        num_2 = 2;
        for (int i = 1; i < pos + 1; i++)
        {
            switch (i)
            {
            case 1:
                res = 1;
                break;
            case 2:
                res = 2;
                break;
            case 3:
                res = num_1 + num_2;
                break;
            default:
                num_1 = num_2;
                num_2 = res;
                res = num_1 + num_2;
                break;
            }
        }
        return res;
    }
}