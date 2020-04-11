

// void Log(const char *message);
int forGTest()
{
    return 0;
}
int main(int argc, char *argv[]){
    extern int count;
    count = 1;
    void Log(const char *message);
    Log("Hello world");
    return 0;
}