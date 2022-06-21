#include <iostream>
using namespace std;

class A
{
protected:
    int num;
public:
    A() : num(0) {};
    A(int n) : num(n) {};
};

class B
{
protected:
    double dnum;
public:
    B() : dnum(0) {};
    B(double d) : dnum(d) {};
};

class AB : public A, B
{
public:
    AB() : A(), B() {};
    AB(int n, double d) : A(n), B(d) {};
    void PrintMember()
    {
        printf("A클래스의 멤버 변수 : %d\n", num);
        printf("B클래스의 멤버 변수 : %.2f\n", dnum);
    }
};

int main()
{
    AB ab(1, 7.56);
    ab.PrintMember();
}

