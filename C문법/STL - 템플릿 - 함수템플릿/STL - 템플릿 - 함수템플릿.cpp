#include <iostream>
using namespace std;

template<typename T>
T Sum(T a, T b)
{
    return a + b;
}

template<typename T1, typename T2>
void ShowInfo(T1 a, T1 b)
{
    cout << "T1 타입 : " << typeid(a).name() << endl;
    cout << "매개변수 a : " << a << endl;
    cout << "T2 타입 : " << typeid(b).name() << endl;
    cout << "매개변수 b : " << b << endl;
}

template<typename S1, typename S2>
void ShowInfo(S1 s1, S2 s2)
{
    cout << "S1 : " << s1 << endl;
    cout << "S2 : " << s2 << endl;
}

template<>
void ShowInfo<double, int>(double a, int b)
{
    cout << "특정 동작 " << endl;
}
int main()
{
    string a = "ab", b = "cd";
    printf("%d\n", Sum(10, 20));
    printf("%.2f\n", Sum(3.14, 2.3));
    printf("%s\n", Sum(a, b).c_str());

    printf("\n==========================================\n");
    printf("%s", Sum<string>("ab", "cd").c_str());

    printf("\n==========================================\n");

    ShowInfo<int, double>(10, 20.2);
    
    ShowInfo<int, string>(10, "Hi");
    ShowInfo<double, int>(22.2, 11);
}

