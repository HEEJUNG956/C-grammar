#include <iostream>

int main()
{
    int src[] = { 1,2,3 };
    int dest[3];

    memcpy(dest, src, sizeof(int) * 3);

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", src[i]);
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d", dest[i]);
    }
    printf("\n");
    const char* front = "BlackMask";
    char back1[] = "abcdefghijklmnop";
    char back2[] = "abcdefghijklmnop";

    memcpy(back1, front, sizeof(char) * 6);

    memcpy(back2, front, sizeof(char) * 10 + 1);

    printf("%s", front);
    printf("\n");
    printf("%s\n", back1);
    printf("%s\n", back2);
    return 0;
}
