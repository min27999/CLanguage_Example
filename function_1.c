/*
C언어 함수(1)
parameter and return value
*/

#include <stdio.h>

void hello(void);
void int_print(int x);  //x: parameter
int add(int a, int b);

int main()
{
    const int k = 7;
    const int x = 1, y = 2;

    printf("hello() func:\n");
    hello();

    printf("int_print() func:\n");
    int_print(k);   //k: argument

    printf("add() func:\n");
    printf("result: %d\n", add(x, y));

    return 0;
}

void hello(void)
{
    printf("Hello World\n");
}

void int_print(int x)
{
    printf("%d\n", x);
}

int add(int a, int b)
{
    return a + b;
}
