#include <iostream>

using namespace std;

int sum(int x, int y)
{
    int result = x + y;
    return result;
}

void sum1(int x, int y)
{
    printf("void 함수 = 두 값의 합은 %d\n", x + y);
}

int main()
{
    int x = 3, y = 5;
    int result;
    result = sum(x, y);
    printf("return 함수 = 두 값의 합은 %d\n", result);
    sum1(x, y);
}

