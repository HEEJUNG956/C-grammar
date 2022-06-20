#include <iostream>

using namespace std;

class Circle {
private:
	//int radius;
public:
	int radius;
	double getArea();
	Circle();
	Circle(int x);
	~Circle();
};

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

Circle::Circle()
{
	radius = 1;
	printf("반지름이 %d인 원 생성\n", radius);
}

Circle::Circle(int x)
{
	radius = x;
	printf("반지름이 %d인 원 생성\n", radius);
}

Circle::~Circle()
{
	printf("반지름이 %d인 원 소멸\n", radius);
}




int main()
{
	Circle waffle(5);
	double area = waffle.getArea();
	printf("waffle의 면적은 %f\n", area);
	return 0;
}