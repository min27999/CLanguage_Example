/*
구조체(2)
구조체의 선언과 동시에 초기화
*/

#include <stdio.h>
#include <string.h>

struct Person
{
    char name[10];
    int age;
}student;

int main()
{
    strcpy(student.name, "조정민");

    printf("이름: %s\n", student.name);
    printf("나이: %d\n", student.age);    // 결과 예측

    return 0;
}
