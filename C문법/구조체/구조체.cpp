#include <iostream>

using namespace std;

struct Student {
    string name;
    string school;
    string major;
    int age;
    int grade;
    int stu_num;
};

int main()
{
    Student stu1;
    stu1.name = "홍길동";
    stu1.school = "대학교";
    stu1.major = "수학과";
    stu1.age = 26;
    stu1.grade = 4;
    stu1.stu_num = 20220620;
    
    Student stu2 = { "철수", "중학교", "사립", 15, 2, 0000001 };
    Student stu3 = { "영희", "고등학교", "국립" };
    
    cout << "이름 : " << stu1.name << "\n학교 : " << stu1.school << "\n전공 : " << stu1.major;
    cout << "\n나이 : " << stu1.age << "\n학년 : " << stu1.grade << "\n학번 : " << stu1.stu_num;
    cout << "\n----------------------------------------\n";
    cout << "이름 : " << stu2.name << "\n학교 : " << stu2.school << "\n전공 : " << stu2.major;
    cout << "\n나이 : " << stu2.age << "\n학년 : " << stu2.grade << "\n학번 : " << stu2.stu_num;
    cout << "\n----------------------------------------\n";
    cout << "이름 : " << stu3.name << "\n학교 : " << stu3.school << "\n전공 : " << stu3.major;
    cout << "\n나이 : " << stu3.age << "\n학년 : " << stu3.grade << "\n학번 : " << stu3.stu_num;

    return 0;
}



