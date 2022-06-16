/*
배열(1)
배열의 선언과 접근
*/

#include <stdio.h>

int main()
{
    int arr[5];
    int i;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("print array\n");

    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}
