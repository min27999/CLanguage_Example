/*
C언어 함수(3)
포인터를 이용한 Call By Reference 묘사(Call By Pointer)
*/

#include <stdio.h>

void swap(int* a, int* b);

int main()
{
    int x = 3, y = 4;

    printf("before swap\n");
    printf("x: %d, y: %d\n", x, y);
    swap(&x, &y);
    printf("after swap\n");
    printf("x: %d, y: %d\n", x, y);

    return 0;
}

void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
