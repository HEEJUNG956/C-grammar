#include <iostream>

using namespace std;
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "[" << *(arr + i) << "]";
    }
    printf("\n");

    memset(arr, 1, sizeof(int) * 5);

    for (int i = 0; i < 5; i++)
    {
        printf("[%d]", *(arr + i));
    }
    printf("\n");
    return 0;
}

