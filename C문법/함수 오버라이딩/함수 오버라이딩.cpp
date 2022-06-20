#include <iostream>
using namespace std;

// 상속 오버라이딩
class A
{
public:
    void over() 
    { 
        cout << "A 클래스의 over 함수 호출!" << endl; 
    }
};

class B : public A
{
public:
    void over()
    {
        A::over();
        cout << "B 클래스의 over 함수 호출!" << endl;
    }
};

// 가상함수 virtual
class Parent
{
public:
    virtual void func()
    {
        cout << "부모 클래스의 func 함수 호출!" << endl;
    }
};

class Child : public Parent
{
public:
    virtual void func()
    {
        cout << "자식 클래스의 func 함수 호출!" << endl;
    }
};

class ParentOne
{
public:
    void funcone()
    {
        cout << "ParentOne 클래스에서 funcone() 호출!" << endl;
    }
};

class ParentTwo
{
public:
    void functwo()
    {
        cout << "ParentTwo 클래스에서 functwo() 호출!" << endl;
    }
};

class Adult : public ParentOne, public ParentTwo
{
public:
    void func()
    {
        funcone();
        functwo();
    }
};
int main()
{
    B b;
    b.over();

    Parent P, * pP;
    Child C;
    printf("\n=====================================================\n");

    pP = &P;
    pP -> func();
    pP = &C;
    pP -> func();
    printf("\n=====================================================\n");

    Adult adult;
    adult.func();
    return 0;
}