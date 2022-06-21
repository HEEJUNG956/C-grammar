#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <chrono>
#include <string>
#include <thread>
#include <ctime>
#include <time.h>
using namespace std;

void PrintCurrentTime()
{
    time_t timer = time(NULL);
    struct tm* t = localtime(&timer);
    printf("현재 년: %d\n", t->tm_year + 1900);
    printf("현재 월: %d\n", t->tm_mon + 1);
    printf("현재 일: %d\n", t->tm_mday);
    printf("현재 시: %d\n", t->tm_hour);
    printf("현재 분: %d\n", t->tm_min);
    printf("현재 초: %d\n", t->tm_sec);
    printf("현재 요일: %d\n", t->tm_wday);
}

void PrintMessage(const string& message)
{
    printf("Sleep now...\n");
    PrintCurrentTime();
    printf("\n");
    this_thread::sleep_for(chrono::seconds(3));
    printf("message : %s", message.c_str());
    PrintCurrentTime();
    printf("\n");
}

int main()
{
    thread thread(PrintMessage, "메시지 child 쓰레드");

    PrintMessage("메인 쓰레드에서 나온 메시지");

    thread.join();
    return 0;
}

