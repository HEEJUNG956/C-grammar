#include <iostream>
using namespace std;

class Test
{
    int num1;
    static int a;
public:
    Test() : num1(10) {};
    void PrintVal()
    {
        printf("일반 멤버 변수 : %d\n", num1);
        printf("static 멤버 변수 : %d\n", a);
        printf("\n========================================================\n");
    }
    void setStatic(int x)
    {
        a = x;
    };
    void setNum(int x)
    {
        num1 = x;
    }
};

int Test::a = 0;

int main()
{
    Test t1;
    Test t2;
    
    t1.PrintVal();
    t2.PrintVal();

    t1.setStatic(100);
    t2.setNum(22);

    t1.PrintVal();
    t2.PrintVal();
}

