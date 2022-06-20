#include <iostream>

#define ADD1(a,b) a + b
#define ADD2(x,y) #x "+" #y
#define MUL1(x,y) x * y
#define MUL2(x, y) (x)* (y)

#define CONCAT(x,y,z) x ## y ## z

int main()
{
    int num1 = 5;
    int num2 = 4;

    printf("매크로 함수 ADD1: %d + %d = %d\n", num1, num2, ADD1(num1, num2));
    printf("매크로 함수 ADD2: %s\n", ADD2(num1, num2));
    printf("매크로 함수 MUL1: %d * %d = %d\n", num1+1, num2+1, MUL1(num1 + 1, num2 + 1));
    printf("매크로 함수 MUL2: %d * %d = %d\n", num1+1, num2+1, MUL2(num1 + 1, num2 + 1));

    printf("매크로함수(CONCAT) : %d\n", CONCAT(10, 20, 30));
    return 0;
}

