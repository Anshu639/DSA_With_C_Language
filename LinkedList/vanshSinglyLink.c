#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *p, *new, *head = NULL;

void insertion(int data)
{
    new = (struct node *)malloc(sizeof(struct node));
    new->next = NULL;
    new->data = data;
    if (head == NULL)
    {
        head = p = new;
    }
    else
    {
        p->next = new;
        p = new;
    }
}

void display()
{
    p = head;
    while (p != NULL)
    {
        printf("%d \t,", p->data);
        p = p->next;
    }
}
int main()
{
    insertion(4);
    insertion(10);
    insertion(45);
    insertion(4);
    display();
    return 0;
}