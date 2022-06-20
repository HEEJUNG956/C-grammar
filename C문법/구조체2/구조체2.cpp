#include <iostream>
#include <string>

using namespace std;

struct Employee
{
    string name;
    int employee_num;
};

struct Company
{
    string locate;
    int revenue;
    Employee employee1;
};

struct Test
{
    int test1;
    char test2;
    double test3;
};

int main()
{
    Company myCom = { "서울", 10000, {"홍길동", 00001} };

    printf("회사 위치 : %s\n", myCom.locate.c_str());
    printf("사원 이름 : %s\n", myCom.employee1.name.c_str());


    Test test;
    cout << "멤버변수의 크기 : " << sizeof(test.test1) << ',' << sizeof(test.test2);
    cout << ',' << sizeof(test.test3) << endl;

    cout << "구조체의 크기 : " << sizeof(test) << endl;
}
