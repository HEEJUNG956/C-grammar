#include <iostream>

//strcat 구현
char* my_strcat(char* d, const char* s)
{
    char* p = d;
    while (*d) d++;
    while (*s) *d++ = *s++;
    *d = '\0';
    return p;
}

//strncat 구현
char* my_strncat(char* d, const char* s, size_t sz)
{
    char* p = d;
    while (*d) d++;
    while (*s && sz-- > 0) *d++ = *s++;
    *d = '\0';
    return p;
}

int main()
{
    char str1[10] = "abc";
    char str2[] = "def";
    char str3[] = "ghi";

    my_strcat(str1, str2);
    printf("strcat : %s\n", str1);

    my_strncat(str1, str3, 2);
    printf("strncat : %s\n", str1);

    return 0;
}
