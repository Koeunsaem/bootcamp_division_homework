/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main()
{

    int score = 0;

    scanf("%d", &score);
    if (score > 89)
        printf("A");
    else if (score > 79)
        printf("B");
    else if (score > 69)
        printf("C");
    else if (score > 59)
        printf("D");
    else
        printf("F");

    return 0;
}