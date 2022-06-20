#include <iostream>

using namespace std;

int Factorial(int num)
{
    int result = 1;
    for (int i = 2; i <= num; i++)
    {
        result *= i;
    }
    return result;
}

int FactoruualIf(int num)
{
    if (num == 1)
    {
        return 1;
    }
    return num * Factorial(num - 1);
}
int main()
{
    int num = 5;
    printf("%d! 값 : %d\n", num, Factorial(num));
    return 0;
}

