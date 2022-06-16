/*
배열(2)
포인터를 통한 배열의 접근
배열의 이름 == 배열[0]의 주소값(포인터)
*/

#include <stdio.h>

int main()
{
    int arr[5];
    int i;

    for(i = 0; i < 5; i++)
        scanf("%d", arr + i);

    printf("print array\n");

    for(i = 0; i < 5; i++)
        printf("%d ", *(arr + i));

    return 0;
}
