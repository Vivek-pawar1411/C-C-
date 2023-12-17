#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linked_display(struct node *ptr);
struct node *insert_at_first(struct node *head, int data);
struct node *insert_at_index(struct node *head, int data, int index);
struct node *insert_at_end(struct node *head, int data);

int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *forth;
    head = (struct Node *)malloc(sizeof(struct node));
    second = (struct Node *)malloc(sizeof(struct node));
    third = (struct Node *)malloc(sizeof(struct node));
    forth = (struct Node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;
    second->data = 14;
    second->next = third;
    third->data = 21;
    third->next = forth;
    forth->data = 28;
    forth->next = NULL;

    printf("linked list before insertion\n");
    linked_display(head);
    head = insert_at_index(head, 18, 2);
    printf("linked list after insertion\n");
    linked_display(head);
    return 0;
}
void linked_display(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *insert_at_first(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}
struct node *insert_at_end(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
struct node *insert_at_index(struct node *head, int data, int index)

{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
