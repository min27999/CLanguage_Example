/*
구조체(3)
구조체 배열
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
    int i;
    char temp[10];
    struct Person student[3];

    for(i = 0; i < 3; i++)
    {
        printf("이름 입력: ");
        scanf("%s", temp);
        strcpy(student[i].name, temp);
        printf("나이 입력: ");
        scanf("%d", &student[i].age);
    }

    for(i = 0; i < 3; i++)
    {
        printf("student[%d] 이름: %s\n", i, student[i].name);
        printf("student[%d] 나이: %d\n", i, student[i].age);
    }

    return 0;
}
