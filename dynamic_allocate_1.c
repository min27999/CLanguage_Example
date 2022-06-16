/*
동적 할당(1)
동적 배열의 선언
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *arr;

    scanf("%d", &n);
    arr = malloc(sizeof(int) * n);

    for(i = 0; i < n; i++)
        arr[i] = i + 1;

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);

    return 0;
}
