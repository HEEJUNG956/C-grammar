#include <iostream>

using namespace std;

// 오버로딩은 함수의 이름을 동일시하고 매개변수를 다르게주어
// 함수명을 어떻게 정했는지 헷갈리지 않도록 도와준다.
void IntAddPrint(int x, int y)
{
    printf("두 수의 합 : %d\n", x + y);
}

void DoubleAddPrint(double x, double y)
{
    printf("두 수의 합 : %.2f\n", x + y);
}

void AddPrint(int x, int y)
{
    printf("두수의 합 : %d\n", x + y);
}

void AddPrint(double x, double y)
{
    printf("두수의 합 : %.2f\n", x + y);
}

int main()
{
    //IntAddPrint(5, 12);
    //DoubleAddPrint(5.3, 11.4);

    AddPrint(5, 12);
    AddPrint(5.3, 11.6);
    return 0;
}
