
#include <iostream>
using namespace std;

// private
struct St
{
    int a;
    double b;
};

class C1
{
    int x;
    double y;
};

class Sample
{
    int x;
    double y;
    void Print()
    {
        printf("%d\n", x);
        printf("%d\n", y);
    }
};

class Test
{
public:
    int x;
    double y;
};

// public
class TestSample
{
    int x;
    double y;
public:
    TestSample() :x(0), y(0) {};
    void Print() const
    {
        printf("클래스 Test의 멤버변수 x : %d\n", x);
        printf("클래스 Test의 멤버변수 y : %d\n", y);
    }
};

//protected
class Temp
{
    int x;
    double y;
protected:
    int z;
public:
    Temp() :x(1), y(2), z(3) {};
};

class Temp2 : public Temp
{
public:
    void Print()
    {
        printf("z : %d", z);
    }
    void Print2()
    {
        // x는 private로 선언되어 접근 불가
        //printf("x : %d", x);
    }
};
int main()
{
    St st;
    st.a = 1;
    st.b = 1.1;

    C1 c1;
    // 클래스의 경우 기본 접근제어자가 private여서 사용 불가
    //c1.x = 1;
    //c1.y = 1.1

    Sample sample;
    // 멤버 변수, 함수 전부 클래스 외부인 메인함수에서는 접근 불가
    // 클래스 내의 함수 Print에서는 멤버변수 x,y 사용 가능
    //printf("%d", sample.x);
    //sample.Print();

    Test test;
    test.x = 10;
    test.y = 1.1;

    printf("클래스 Test의 멤버변수 x : %d\n", test.x);
    printf("클래스 Test의 멤버변수 y : %.1f\n", test.y);
    printf("\n==============================================================\n");
    
    TestSample testsample;
    testsample.Print();
    printf("\n==============================================================\n");

    Temp temp;
    // 외부인 메인함수에서는 x, y, z 모두 접근 불가
    //printf("%d", temp.x);
    //printf("%d", temp.z);
    return 0;
}

