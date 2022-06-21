#include <iostream>
#include <sstream>
#include <string>
#include <thread>
#include <vector>
using namespace std;
int main()
{
    vector<int> list(100, 1);
    int result = 0;

    thread thread([](const vector<int>& v, int& result)
    {
        for (auto item : v)
        {
            for (auto item : v)
            {
                result += item;
            }
        }

    }, list, ref(result));

    thread.join();
    printf("Result : %d\n", result);
    return 0;
}
