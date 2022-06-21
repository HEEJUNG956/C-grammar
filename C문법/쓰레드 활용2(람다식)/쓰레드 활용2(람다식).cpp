#include <iostream>
#include <sstream>
#include <string>
#include <thread>
#include <vector>
using namespace std;

int main()
{
    auto printMessage = [](const string& message)
    {
        printf("%s", message.c_str());
    };

    thread thread(printMessage, "람다식 쓰레드.\n");
    printMessage("람다식 쓰레드 준비중\n");
    thread.join();

    printf("\n================================================================= \n");
    printf("================================================================= \n");

    return 0;
}
