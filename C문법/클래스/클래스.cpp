#include <iostream>
using namespace std;
class Test
{
    int test_val1;
    double test_val2;
    string test_val3;
public:

    void PrintVal()
    {
        printf("test_val1 : %d \n", test_val1);
        printf("test_val2 : %.1f\n", test_val2);
        printf("test_val3 : %s\n", test_val3.c_str());
    }
    void Print_TypeVal();
};

void Test::Print_TypeVal()
{
    //printf("test_val1 : %d ", typeid(test_val1).name());
    //printf("test_val2 : %.1f", typeid(test_val2).name());
    //printf("test_val3 : %s", typeid(test_val3).name());
    
    cout << "test_val1 : \n" << typeid(test_val1).name() << endl;
    cout << "test_val2 : \n" << typeid(test_val2).name() << endl;
    cout << "test_val3 : \n" << typeid(test_val3).name() << endl;
}


int main()
{
    Test test;
    test.PrintVal();

    return 0;
}