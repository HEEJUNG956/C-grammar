#include <iostream>

int my_strcmp(char* str1, char* str2)
{
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\n')
    {
        if (str1[i] == str2[i])
        {
            i++;
            continue;
        }

        else if (str1[i] > str2[i]) return 1;
        else if (str1[i] < str2[i]) return -1;
        i++;
    }

    if (str1[i] == str2[i]) return 0;
    else if (str1[i] != '\0') return 1;
    else return -1;
}

int my_strncmp(char* str1, char* str2, int n)
{
    int i = 0;
    while (i < n && (str1[i] != '\0' || str2[i] != '\0'))
    {
        if (str1[i] == str2[i])
        {
            i++;
            continue;
        }
        else if (str1[i] > str2[i]) return 1;
        else if (str1[i] < str2[i]) return -1;

        i++;
    }

    if (n == i) return 0;
    else if (str1[i] == '\0' && str2[i] == '\0') return 0;
    else if (str1[i] > str2[i]) return 1;
    else return -1;
}


int main()
{
    char s1[10] = "aaa";
    char s2[10] = "aab";

    printf("strcmp : %d\n", my_strcmp(s1, s2));
    printf("strncmp : %d\n", my_strncmp(s1, s2, 2));

    return 0;
}

