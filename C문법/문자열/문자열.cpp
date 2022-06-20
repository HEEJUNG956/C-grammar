#include <iostream>
#include <string>
using namespace std;
int main()
{
    //const int SIZE = 20;
    //char name[SIZE];
    //char school[SIZE];

    //printf("이름을 입력하세요 : ");
    //scanf("%s", name);
    //printf("재학중인 학교를 입력하세요 : ");
    //scanf("%s", school);
    //printf("%s 학생인 %s님  반갑습니다.\n", school, name);

    //string str1 = "HI";
    //string str2;
    //str2 = str1;

    //cout << str2 << endl;
    //printf("%c,%c,%c", str2[0], str2[1], str2[2]);

    // compare 함수
    //string str1 = "Hello";
    //string str2 = "Hi";

    //if (str1.compare(str2) == 0)
    //{
    //    printf("문자열 일치\n");
    //}
    //else if (str1.compare(str2) < 0)
    //{
    //    printf("%s가 사전편찬 순서 앞\n", str1.c_str());
    //}
    //else
    //{
    //    printf("%s가 사전편찬 순서 뒤\n", str2.c_str());
    //}

    // replace() 함수
    //string str1 = "My name is apple";
    //string orig_str = "apple";
    //string change_str = "orange";
    //int index = str1.find(orig_str);

    //printf("%s\n", str1.replace(index, change_str.length(), change_str).c_str());

    // capacity(), max_size() 함수
    string str1 = "My name is apple";
    printf("문자열의 length()는 %i\n", str1.length());
    printf("문자열의 capacity()는 %i\n", str1.capacity());
    printf("문자열의 max_size()는 %u\n", str1.max_size());
}


