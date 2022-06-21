#include <iostream>
#include <thread>
using namespace std;

void call_from_thread(int tid)
{
    printf("쓰레드 실행 !! %d\n", tid);
}

void func1()
{
    for (int i = 0; i < 10; i++)
    {
        printf("쓰레드 1 작동중\n");
    }
}

void func2()
{
    for (int i = 0; i < 10; i++)
    {
        printf("쓰레드 2 작동중\n");
    }
}

void func3()
{
    for (int i = 0; i < 10; i++)
    {
        printf("쓰레드 3 작동중\n");
    }
}

int main()
{
    thread t[10];

    for (int i = 0; i < 10; i++)
    {
        t[i] = thread(call_from_thread, i);
    }

    printf("메인 함수 시작\n");

    for (int i = 0; i < 10; i++)
    {
        t[i].join();
    }

    printf("\n==========================================================\n");

    thread t1(func1);
    thread t2(func2);
    thread t3(func3);

    // 함수 실행이 완료가 되어도 쓰레드는 여전히 joinable하다.
    this_thread::sleep_for(chrono::milliseconds(500));

    if (t1.joinable())
        printf("thread1 is joinable\n");
    if (t2.joinable())
        printf("thread2 is joinable\n");
    if (t3.joinable())
        printf("thread is joinable\n");

    t1.join();
    t2.join();
    t3.join();
    return 0;
}

