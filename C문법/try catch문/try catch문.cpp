#include <iostream>

using namespace std;
int	main(void)
{
    try
    {
        int level = 1;
        if (level >= 3)
        {
            printf("입장 가능");
        }
        else
        {
            throw 505;
        }
    }
    catch (int error)
    {
        printf("접근 불가. level 3 이상 입장 가능.\n");
        printf("에러번호 : %d", error);
    }
    return 0;
}