#include <iostream>

struct Score
{
    char name[10];
    int *kor;
    int *mat;
    int *eng;
};

int main()
{
    int score1 = 100;
    int score2 = 90;
    int score3 = 80;

    struct Score s;
    s.kor = &score1;
    s.mat = &score2;
    s.eng = &score3;

    printf("국어점수 : %d\n", *s.kor);
    printf("수학점수 : %d\n", *s.mat);
    printf("영어점수 : %d\n\n", *s.eng);

    score1 = 50;
    score2 = 40;
    score3 = 30;

    printf("국어점수 : %d\n", *s.kor);
    printf("수학점수 : %d\n", *s.mat);
    printf("영어점수 : %d\n", *s.eng);

    return 0;
}
