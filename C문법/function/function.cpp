#include <iostream>

void print()
{
    printf("Hello\n");
}

int add(int x, int y)
{
    return x + y;
}

int my_strlen(char* temp)
{
    int count = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (temp[i] == '\0')
            return count;
        count++;
    }
}

char* my_strok(char* temp, int start, int end) {
    char result[1000] = { 0, };

    for (int i = 0; i <= (end - start); i++) {
        result[i] = temp[start++];
    }

    return result;
}
int main()
{
    char temp[] = "hello world";
    char* result = my_strok(temp, 1, 3);
    printf("cut str : %s\n", result);
    return 0;
}
