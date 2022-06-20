#include <iostream>

using namespace std;
union Share
{
    int a;
    double b;
    char c;
};

int main()
{
    Share data;
    data.a = 67;

    printf("data.a의 값 : %d\n", data.a);
    printf("data.b의 값 : %f\n", data.b);
    printf("data.c의 값 : %c\n", data.c);

    printf("data.a의 값 : %d\n", sizeof(data.a));
    printf("data.a의 값 : %d\n", sizeof(data.b));
    printf("data.a의 값 : %d\n", sizeof(data.c));
}

