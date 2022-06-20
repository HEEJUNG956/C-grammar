
#include <iostream>
using namespace std;

// this pointer란
class Test
{
    int num;
public:
    Test() :num(0) {};
    void printNum()
    {
        cout << "this의 주소 : " << this << endl;
    }
};

// -> (화살표 연산자)
class Test1
{
    int num;
public:
    Test1():num(0) {};

    void printNum(int num)
    {
        this->num = num;
        cout << this->num << endl;
    }
};
int main()
{
    Test test1;
    Test test2;

    printf("test1 객체의 주소 : %p\n", &test1);
    printf("test2 객체의 주소 : %p\n", &test2);

    test1.printNum();
    test2.printNum();
    printf("\n===========================================================\n");

    Test1 test3;
    test3.printNum(10);
    return 0;
}

