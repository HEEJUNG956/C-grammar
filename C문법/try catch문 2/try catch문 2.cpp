#include <iostream>
using namespace std;

int main()
{
    try
    {
        int level = 2;
        if (level >= 3)
        {
            printf("입장 가능");
        }
        else
        {
            throw 505;
        }
    }
    catch (...)
    {
        printf("접근불가. level 3 이상 입장 가능");
    }
}

