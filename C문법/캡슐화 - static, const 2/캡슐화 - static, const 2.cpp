#include <iostream>
using namespace std;

class Test 
{
    int num1;
    static int num2;
    const int num3;
public:
    Test() :num1(10), num3(20) {};
    void printVal() const
    {
        printf("일반 멤버 변수 : %d\n", num1);
        printf("정적 멤버 변수 : %d\n", num2);
        printf("상수 멤버 변수 : %d\n", num3);
    }
};

int Test::num2 = 0;

int main()
{
    Test t;
    t.printVal();
}

