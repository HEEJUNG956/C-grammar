#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
template <class T>
T add(T x, T y)
{
    return x + y;
}

template<>
char* add(char* s1, char* s2)
{
    char* str = new char[100];
    strcpy(str, s1);
    strcat(str, s2);
    return str;
}

//class Calcu
//{
//private:
//    T num1;
//    T num2;
//public:
//    Calcu(T num1, T num2)
//    {
//        this->num1 = num1;
//        this->num2 = num2;
//    }
//    T GetAdd()
//    {
//        return num1 + num2;
//    }
//};


int main()
{
    /*Calcu<int> calcu1(10, 20);
    printf("%d\n", calcu1.GetAdd());

    Calcu<double> calcu2(10.52, 20.24);
    printf("%.2f\n", calcu2.GetAdd());*/

    char num1[] = "10", num2[] = "20";
    cout << add(num1, num2) << endl;
    return 0;
}


