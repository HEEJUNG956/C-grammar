#include <iostream>
#include <functional>

using namespace std;
typedef int (*fptr)(int, int);
using fptr_using = int(*)(int, int);

int Sum(int a, int b)
{
    return a + b;
}

int main()
{
    int num1 = 10, num2 = 23;
    fptr Fptr = Sum;
    auto Fptr_auto = Sum;
    fptr_using Fptr_using = Sum;

    printf("typedef 이용 : %d\n", Fptr(num1, num2));
    printf("auto 이용 : %d\n", Fptr_auto(num1, num2));
    printf("using 이용 : %d\n", Fptr_using(num1, num2));

    function<int(int, int)> Fptr_function = Sum;

    printf("function 이용 : %d\n", Fptr_function(num1, num2));
    return 0;
}


