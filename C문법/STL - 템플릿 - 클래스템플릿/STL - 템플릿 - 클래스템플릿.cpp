#include <iostream>
using namespace std;

template<typename T>
class Test
{
    T val;
public:
    Test(T v) :val(v) {};
    T GetVal();
    void PrintInfo()
    {
        cout << "멤버변수 : " << val << endl;
    }
};

template<typename T>
T Test<T>::GetVal()
{
    return val;
}

int main()
{
    std::cout << "Hello World!\n";
}
