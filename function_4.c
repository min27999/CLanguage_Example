/*
함수(4)
재귀함수
Stack 구조
*/

#include <stdio.h>

int numOfFibonacci(int n);

int main()
{
    int n;

    scanf("%d", &n);

    printf("Fibonacci %d: %d", n, numOfFibonacci(n));

    return 0;
}

int numOfFibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return numOfFibonacci(n - 1) + numOfFibonacci(n - 2);
}
