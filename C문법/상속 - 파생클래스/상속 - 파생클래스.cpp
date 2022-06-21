#include <iostream>

using namespace std;
class Person
{
    bool breath;
    bool leg;
public:
    Person() : breath(true), leg(true)
    {
        printf("Person 생성자\n");
    }
    ~Person()
    {
        printf("Person 소멸자\n");
    }
    void PrintInfo()
    {
        if (breath && leg)
        {
            printf("사람!\n");
        }
    }
    void Athletic_ability()
    {
        printf("보통 운동 능력\n");
    }
};

class Athlete : public Person
{
    string major;
public:
    Athlete(string m) :Person(), major(m)
    {
        printf("자식 클래스 생성자\n");
    }
    ~Athlete()
    {
        printf("자식 클래스 소멸자\n");
    }
    void PrintMajor()
    {
        printf("%s\n", major.c_str());
    }
    void Athletic_ability()
    {
        printf("뛰어남\n");
    }
};

int main()
{
    Athlete a("soccer");

    a.PrintInfo();
    a.PrintMajor();
    a.Athletic_ability();
}

