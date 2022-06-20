#include <iostream>

//소멸자
class Test
{
    int num1;
    double num2;
    int* pt_num;
public:
    Test() : num1(10), num2(10.1)
    {
        pt_num = new int;
        *pt_num = 10;
        printf("생성자 호출\n");
    };
    ~Test()
    {
        delete pt_num;  // 메모리 제거
        printf("소멸자 호출\n");
    }
};
int main()
{
    Test test1;
}

