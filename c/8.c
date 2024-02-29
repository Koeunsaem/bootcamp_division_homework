/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main()
{
    int num;
    int sum = 0, ftr = 1;

    scanf("%d", &num);

    for (int i = 1; i < (num + 1); i++)
        sum += i;
    printf("%d\n", sum);

    for (int i = 2; i <= num; i++)
    {
        ftr *= i;
    }

    printf("%d", ftr);

    return 0;
}