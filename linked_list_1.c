/*
연결 리스트(1)
단일 연결 리스트
*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    int i = 1;
    struct Node *head = malloc(sizeof(struct Node));

    struct Node *node1 = malloc(sizeof(struct Node));
    head->next = node1;
    node1->data = 100;

    struct Node *node2 = malloc(sizeof(struct Node));
    node1->next = node2;
    node2->data = 200;

    struct Node *node3 = malloc(sizeof(struct Node));
    node2->next = node3;
    node3->data = 300;

    node3->next = NULL;

    struct Node *curr = head->next;

    while (curr != NULL)
    {
        printf("Node%d data: %d\n", i, curr->data);
        curr = curr->next;
        i++;
    }

    free(head);
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
