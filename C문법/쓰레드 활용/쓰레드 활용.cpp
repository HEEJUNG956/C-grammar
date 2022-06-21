#include <iostream>
#include <sstream>
#include <string>
#include <thread>
#include <vector>

using namespace std;

void threadSample1(const string& message)
{
    printf("%s\n", message.c_str());
}

void threadSample2(const string& message, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%d : %s\n", i + 1, message.c_str());
    }
}
int main()
{
    thread Sample1(threadSample1, "메시지 get_id 쓰레드 확인\n");
    thread::id childThreadID = Sample1.get_id();
    stringstream ss;
    ss << childThreadID;
    string childThreadIDStr = ss.str();
    
    threadSample1("기다리는중 get_id 쓰레드ID(ID : " + childThreadIDStr + ")\n");
    Sample1.join();

    printf("\n================================================================= \n");
    printf("================================================================= \n");

    thread Sample2(threadSample2, "메시지 detach 쓰레드 확인\n", 10);
    threadSample2("기다리는중 detach 쓰레드 \n", 1);

    Sample2.detach();

    if (Sample2.joinable())
    {
        Sample2.join();
    }


    return 0;
}
