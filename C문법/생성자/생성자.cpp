#include <iostream>
using namespace std;

// 기본 생성자
class Test
{
    int num1;
    double num2;
public:
    Test(int x, double y)
    {
        printf("생성자 호출\n");
        num1 = x;
        num2 = y;
    }
    
    void printNum() const
    {
        printf("num1 : %d\n", num1);
        printf("num2 : %.1f\n", num2);
    }

    // 복사 생성자
    Test(Test& t)
    {
        printf("복사 생성자 호출\n");
        num1 = t.num1;
        num2 = t.num2;
    }

    // 멤버 이니셜라이저
    Test():num1(10), num2(10.1){}
    
};

// 디폴트 생성자
class Temp
{
    int num1;
    double num2;
public:
    Temp(int a = 10, double b = 10.1)
    {
        printf("디폴트 생성자 호출\n");
        num1 = a;
        num2 = b;
    }
    void printNum() const
    {
        printf("num1 : %d\n", num1);
        printf("num2 : %.1f\n", num2);
    }
};





int main()
{
    Test test1(10, 10.1);
    test1.printNum();
    printf("\n================================================================\n");
    Test test2(test1);
    test2.printNum();
    printf("\n================================================================\n");
    Temp temp;
    temp.printNum();
}
