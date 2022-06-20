// 동적.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


int main()
{
    int* pt1_dynamic = new int;
    *pt1_dynamic = 10;

    double* pt2_dynamic = new double;
    *pt2_dynamic = 31.7;

    printf("int형 동적 할당 값 : %d\n", *pt1_dynamic);
    printf("int형 동적 할당 값 : %p\n", pt1_dynamic);
    printf("double형 동적 할당 값 : %f\n", *pt2_dynamic);
    printf("double형 동적 할당 값 : %p\n", pt2_dynamic);
}


