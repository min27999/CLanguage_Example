/*
포인터(1)
포인터 선언, 포인터의 연산
& 연산자, * 연산자
*/

#include <stdio.h>

int main()
{
    int* pa;
    int a = 10;
    pa = &a;
    printf("a: %d\n", a);
    printf("*pa: %d\n", *pa);
    printf("pa: %p\n", pa);
    printf("pa + 1: %p\n", pa + 1);

    return 0;
}
