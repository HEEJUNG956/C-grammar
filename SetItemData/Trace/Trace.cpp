// Trace.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#define _AFXDLL
#include <afx.h>

int main()
{
    int a = 5;
    double b = 5.5;

    printf("a + b = %.1f", a + b);
    TRACE("a = %d, y = %f",a, b);

    return 0;
}
