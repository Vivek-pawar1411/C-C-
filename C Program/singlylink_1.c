#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linked_display(struct node *ptr);
struct node *delete_at_first(struct node *head);
struct node *delete_at_index(struct node *head, int index);
struct node *delete_at_end(struct node *head);

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

    printf("linked list before deleteion\n");
    linked_display(head);
    // head = delete_at_first(head);
    // printf("linked list after deleteion\n");
    // head = delete_at_index(head, 1);
    //  printf("linked list after deleteion\n");
    // linked_display(head);
    head = delete_at_end(head);
    printf("linked list after deleteion\n");
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

struct node *delete_at_first(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct node *delete_at_index(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
struct node *delete_at_end(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->next != NULL)
    {

        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
