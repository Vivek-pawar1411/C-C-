#include <stdio.h>
#define MAX 5
int arr[MAX];
int top;
void intit_stack();
int is_full();
int is_empty();
void push(int values);
void pop();
int peek();
void print_stack();
int menuchoice();
int main()
{
    int choice, data;
    intit_stack();
    print_stack();
    do
    {
        choice = menuchoice();
        switch (choice)
        {
        default:
            printf("\n invalid case");
            continue;
        case 1:
            if (!is_full())
            {
                printf("Enter data ");
                scanf("%d", &data);
                push(data);
            }
            else
                printf("stack is full\n");

            break;
        case 2:
            if (!is_empty())
            {
                data = peek();
                pop();
                printf("\n poped value %d", data);
            }
            else
                printf("stack is empty\n");

            break;
        case 3:
            if (!is_empty())
            {
                data = peek();

                printf("\n peek value %d", data);
            }
            else
                printf("stack is empty\n");

            break;

        case 4:
            print_stack();
            break;
        case 0:
            exit(0);
        }
        print_stack();
        printf("Enter 1 to continue or 0 to exit");
    } while (choice != 0);

    return 0;
}
void intit_stack()
{
    int index;
    top = -1;
    for (size_t index = 0; index <= MAX - 1; index++)
    {
        arr[index] = -1;
    }
}
int is_full()
{
    return top == MAX - 1 ? 1 : 0;
}
int is_empty()
{
    return top == -1 ? 1 : 0;
}
void push(int value)
{
    top++;
    arr[top] =value;

    return;
}
void pop()
{

    arr[top] = -1;
    top--;
    return;
}
int peek()
{
    int value;
    value = arr[top];
    return value;
}
void print_stack()
{
    int index;
    for (index = MAX - 1; index >= 0; index--)
    {
        printf("\n[%-5d]", arr[index]);
    }
    printf("\n top=%d\n", top);
    return;
}
int menuchoice()
{
    int choice;
    printf("\n 1. Push \n 2. Pop \n 3. Peek \n 4. Print Stack \n 0. Exit \n");
    printf("\n Enter Your choice:: ");
    scanf("%d", &choice);
    return choice;
}
