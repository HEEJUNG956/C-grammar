#include <iostream>

char* my_strtok(char* str, const char* delimiters)
{
    static char* pCurrent;
    char* pDelimit;

    if (str != NULL)pCurrent = str;
    else str = pCurrent;
    
    if (*pCurrent == NULL) return NULL;
    while (*pCurrent)
    {
        pDelimit = (char*)delimiters;

        while (*pDelimit)
        {
            if (*pCurrent == *pDelimit)
            {
                *pCurrent = NULL;
                ++pCurrent;
                return str;
            }
            ++pDelimit;
        }
        ++pCurrent;
    }
    return str;
}

int main()
{
    char str[] = "MY NAME IS TOM";
    char* temp = my_strtok(str, " ");
    while (temp != NULL)
    {
        printf("%s\n", temp);
        temp = my_strtok(NULL, " ");
    }
}

