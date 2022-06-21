#include <iostream>
#include <chrono>
#include <string>
#include <thread>
using namespace std;

void PrintMessage(const string& message, chrono::seconds delay)
{
    auto end = chrono::high_resolution_clock::now() + delay;

    while (chrono::high_resolution_clock::now() < end)
    {
        this_thread::yield();
    }

    printf("%s\n", message.c_str());
}

int main()
{
    thread thread(PrintMessage, "메시지 child 쓰레드\n", chrono::seconds(3));
    PrintMessage("메시지 메인 쓰레드\n", chrono::seconds(2));
    thread.join();
    return 0;
}

