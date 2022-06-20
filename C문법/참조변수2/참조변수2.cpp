#include <iostream>
using namespace std;
struct Human
{
    string name;
    int age;
    double tall;
};
void ChangeStruct(Human& h, string n, int a, double t)
{
    h.name = n;
    h.age = a;
    h.tall = t;
}
int main()
{
    Human human1 = { "김OO", 26, 179.5 };
    printf("%s %d %.2f\n", human1.name.c_str(), human1.age, human1.tall);
    ChangeStruct(human1, "박OO", 100, 169.5);
    printf("%s %d %.2f", human1.name.c_str(), human1.age, human1.tall);
    printf("\n------------------------------------------------\n");

    int num = 5;
    int* ptr = &num;    // num의 포인터(메모리 주소값)
    int& ref = num;     // num의 참조

    printf("%p\n", ptr);
    printf("%d\n", ref);

}
