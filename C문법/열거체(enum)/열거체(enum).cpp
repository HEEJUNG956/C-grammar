#include <iostream>

using namespace std;

enum color
{
    red,
    blue,
    green
};

enum Weather
{
    sunny,
    cloud,
    rainy,
    snowy
};

int main()
{
    color col;
    col = blue;
    
    switch (col)
    {
    case red:
        printf("빨강색입니다.\n");
        break;
    case blue:
        printf("파란색입니다\n");
        break;
    case green:
        printf("초록색입니다\n");
        break;
    default:
        printf("잘못된 값입니다.\n");
        break;
    }
}
