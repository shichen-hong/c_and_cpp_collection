#include <vector>
#include <iostream>

using namespace std;

vector<int> createVector(int size, int value)
{
    vector<int> myV;
    for (int i = 0; i < size - 1; i++)
        myV.push_back(value);
    return myV;
}

int main(int argc, char* argv[])
{
    vector<int> aVector = createVector(10, 0);
    
}
