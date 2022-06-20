#include <iostream>

int main()
{
    //const int num = 10; const로 선언된 변수는 non-const로만 참조가능
    int num = 10;
    int& refer = num;
    //int& refer2; 참조 변수는 선언과 동시에 초기화하여야한다
    //int& refer3 = NULL; null을 저장할수있는 포인터와 다르게 null은 참조가 불가능
    const int& refer4 = num;
    //refer4 = a; 한번 참조한 변수는 재참조 불가능

    printf("일반 변수 호출 : %d 참조 변수 호출 : %d \n", num, refer);
    refer = 20;
    printf("일반 변수 호출 : %d 참조 변수 호출 : %d \n", num, refer);
    ++num;
    printf("일반 변수 호출 : %d 참조 변수 호출 : %d \n", num, refer);
    printf("\n------------------------------------------------------\n");
    printf("일반 변수 호출 : %d 참조 변수 호출 : %d \n", num, refer4);
    return 0;
}

