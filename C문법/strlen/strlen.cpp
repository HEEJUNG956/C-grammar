#include <iostream>

int main()
{
    const char* name = "BlockMask";
    printf("1. const char* name = \"BlockMask\"");
    printf("\tlen : %d\n", (int)strlen(name));

    char arr1[50] = "BlockMask";
    printf("2. char arr1[50] = \"BlockDMask\"");
    printf("\tlen : %d\n", (int)strlen(arr1));

    char arr2[100] = "Block\0DMask";
    printf("3. char arr2[100] = \"Block\\0DMask\"");
    printf("\tlen : %d\n", (int)strlen(arr2));

    return 0;
}

