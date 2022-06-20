#include <iostream>
using namespace std;
// 연산자 
// ::   범위지정 연산자
// .    멤버참조 연산자
// .*   멤버포인터 연산자
// ?    삼항 연산자
// #    전처리기 변환
// ##   전처리기 연결

// 멤버함수로만 오버로딩 가능한 연산자
// =    대입 연산자
// ()   함수 호출
// ->   포인터 멤버접근 연산자
// []   배열 인덱스 연산자

class Point
{
    int x;
    int y;
public:
    Point(int a = 0, int b = 0) : x(a), y(b) {};
    void Print()
    {
        printf("x 좌표 : %d y 좌표 : %d\n", x, y);
    }
    Point operator+(Point& P)
    {
        Point pt;
        pt.x = this->x + P.x;
        pt.y = this->y + P.y;

        return pt;
    }
};
int main()
{
    Point p1(1, 3), p2(2, 7);
    Point result = p1 + p2;
    result.Print();
    return 0;
}

