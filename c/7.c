/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main()
{
    int month, year;

    scanf("%d", &year);
    scanf("%d", &month);

    switch (month)
    {
    case 2:
        if ((year % 4) == 0 && (year % 100) != 0)
            printf("29");
        else if ((year % 400) == 0)
            printf("29");
        else
            printf("28");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30");
        break;
    default:
        printf("31");
    }

    return 0;
}