#include <iostream>

class Person
{
    bool breath;
    bool leg;
public:
    Person() :breath(true), leg(true) {};
    void PrintInfo()
    {
        if (breath && leg)
        {
            printf("사람!\n");
        }
    }
    void Athletic_ability()
    {
        printf("보통 운동 능력");
    }
};

class Athlete :public Person
{
public:
    Athlete() :Person() {};
    void Athletic_ability()
    {
        printf("뛰어남\n");
    }
};
int main()
{
    Athlete a;
    a.PrintInfo();
    a.Athletic_ability();
}

