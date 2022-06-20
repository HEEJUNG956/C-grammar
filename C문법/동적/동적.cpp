// 동적.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


int main()
{
    int* a = new int;
    int* b = new int;

    *a = 3;
   
    *b = 2;

    printf("a 주소값 : %d\na 변수값 : %d\na heap값 : %d\n", a, *a, sizeof(*a));
    printf("b 주소값 : %d\nb 변수값 : %d\nb heap값 : %d\n", b, *b, sizeof(*b));
    
    *a = 100;
    *b = 200;
    printf("\n");
    printf("a 주소값 : %d\na 변수값 : %d\na heap값 : %d\n", a, *a, sizeof(*a));
    printf("b 주소값 : %d\nb 변수값 : %d\nb heap값 : %d\n", b, *b, sizeof(*b));
}


