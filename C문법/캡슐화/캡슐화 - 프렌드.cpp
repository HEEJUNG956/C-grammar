#include <iostream>
using namespace std;

//class F_test1
//{
//    int a;
//    friend class F_test2;
//};
//
//class F_test2
//{
//public:
//    void Set(F_test1& F, int x)
//    {
//        F.a = x;
//    }
//    void PrintInfo(F_test1& F)
//    {
//        printf("private로 선언된 F_test1의 a의 값 : %d\n", F.a);
//    }
//};

class F_test1;

class F_test2
{
public:
    void PrintInfo(F_test1&);
};

class F_test1
{
    int a;
public:
    F_test1(int _a = 0) : a(_a) {};
    friend void F_test2::PrintInfo(F_test1& F);
};

void F_test2::PrintInfo(F_test1& F)
{
    cout << F.a << endl;
}

class F_temp1
{
    int b;
public:
    F_temp1(int _b = 0) : b(_b) {};
    friend void TempPrintInfo(F_temp1&);
};

void TempPrintInfo(F_temp1& T)
{
    cout << T.b << endl;
}

int main()
{
    //F_test1 f1;
    //F_test2 f2;

    //f2.Set(f1, 7);
    //f2.PrintInfo(f1);

    F_test1 f1(5);
    F_test2 f2;
    f2.PrintInfo(f1);

    F_temp1 t1(5);
    TempPrintInfo(t1);
    return 0;
}

