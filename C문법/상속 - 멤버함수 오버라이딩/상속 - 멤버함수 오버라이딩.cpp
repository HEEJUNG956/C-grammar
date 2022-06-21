#include <iostream>
using namespace std;

class Person
{
    string name;
public:
    Person(string n) : name(n) {};
    void PrintInfo()
    {
        printf("이름은 %s입니다.\n", name.c_str());
    }
};

class Student :public Person
{
    int stu_num;
public:
    Student(string n, int sn) : Person(n), stu_num(sn) {};
    void PrintInfo()
    {
        Person::PrintInfo();
        printf("학번은 %d입니다.\n", stu_num);
    }
};
int main()
{
    Student stu("홍길동", 123456);
    stu.PrintInfo();
    printf("\n");
    stu.Person::PrintInfo();

    Person* pt_person;
    Person per1("사람1");
    Student stu1("학생1", 123456);
    printf("\n");

    pt_person = &per1;
    pt_person->PrintInfo();

    pt_person = &stu1;
    pt_person->PrintInfo();

    return 0;
}
