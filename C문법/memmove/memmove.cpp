// memmove.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    char source[32] = "복사 대상 메모리";
    char dest[32] = "복사 될 메모리";

    printf("복사 전 : %s\n", dest);
    memmove(dest, source, sizeof(source));
    printf("복사 후 : %s\n", dest);

    system("pause");
    return 0;
}

