#include <iostream>

using namespace std;

void PrintVal(int n1, double n2, char n3 = 'a', string n4 = "Hi")
{
    printf("n1 : %d\n", n1);
    printf("n2 : %.1f\n", n2);
    printf("n3 : %c\n", n3);
    printf("n4 : %s\n", n4.c_str());
    printf("\n---------------------------------------------------\n");
}

inline int Sum(int x, int y)
{
    return x + y;
}

inline int Sub(int x, int y)
{
    return x - y;
}

int main()
{
    PrintVal(1, 10.1);
    PrintVal(1, 10.1, 'F');
    PrintVal(1, 10.1, 'F', "Hello");

    int a = 13, b = 5;
    printf("두 수의 합 : %d\n", Sum(a, b));
    printf("두 수의 차 : %d\n", Sub(a, b));
    return 0;
}
