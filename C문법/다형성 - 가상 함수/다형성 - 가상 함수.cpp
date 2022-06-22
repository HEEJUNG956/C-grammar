#include <iostream>
using namespace std;
class Car
{
public:
    virtual void Speed() = 0;
};

class NormalCar : public Car
{
public:
    virtual void Speed()
    {
        printf("보통\n");
    }
};

class SuperCar : public Car
{
public:
    virtual void Speed()
    {
        printf("Fast\n");
    }
};

// 가상 소멸자
class A
{
public:
    A()
    {
        printf("부모클래스 생성자\n");
    }
    virtual ~A()
    {
        printf("부모클래스 소멸자\n");
    }
};

class B :public A
{
public:
    B()
    {
        printf("자식클래스 생성자\n");
    }
    virtual ~B()
    {
        printf("자식클래스 소멸자\n");
    }
};


int main()
{
    Car* pt_car;
    SuperCar scar;
    NormalCar ncar;

    pt_car = &scar;
    pt_car->Speed();

    pt_car = &ncar;
    pt_car->Speed();

    printf("\n");
    A* pt_a;
    B* b = new B;

    pt_a = b;
    delete pt_a;
}
