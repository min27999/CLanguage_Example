/*
구조체(1)
구조체의 선언과 초기화
*/

#include <stdio.h>
#include <string.h>

struct Person
{
    char name[10];
    int age;
};

int main()
{
    struct Person student;
    strcpy(student.name, "cjm");
    student.age = 20;

    printf("이름: %s\n", student.name);
    printf("나이: %d\n", student.age);

    return 0;
}
