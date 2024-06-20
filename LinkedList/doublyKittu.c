#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *pre;
} *head, *p, *q, *last, *new;

void createlist(int n)
{
    head = (struct node *)malloc(sizeof(struct node));
    printf("enter value:");
    scanf("%d", &head->data);
    head->next = NULL;
    head->pre = NULL;
    last = head;
    p = head;
    for (int i = 1; i < n; i++)
    {
        new = (struct node *)malloc(sizeof(struct node));
        printf("enter value:");
        scanf("%d", &new->data);
        new->next = NULL;
        new->pre = last;
        last->next = new;
        last = new;
    }
}
void print_list()
{
    p = head;
    printf("\nPrinting The Doubly LinkedList:");
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
}
void insert_begin()
{
    new = (struct node *)malloc(sizeof(struct node));
    printf("enter value:");
    scanf("%d", &new->data);
    new->next = head;
    head->pre = new;
    head = new;
}
void insert_mid()
{
    int position;
    new = (struct node *)malloc(sizeof(struct node));
    printf("enter position:");
    scanf("%d", &position);
    printf("enter value:");
    scanf("%d", &new->data);
    p = head;
    for (int i = 0; i < position - 1; i++)
    {
        p = p->next;
    }
    q = p->next;
    p->next = new;
    new->next = q;
    q->pre = new;
}
void insert_last()
{
    new = (struct node *)malloc(sizeof(struct node));
    printf("enter value:");
    scanf("%d", &new->data);
    last->next = new;
    new->pre = last;
    new->next = NULL;
}
void main()
{
    int n;
    printf("enter number of elements you want to insert:");
    scanf("%d", &n);
    createlist(n);
    printf("\nprinting the elements of linked list: ");
    print_list();
    printf("\nprinting the elements of linked list: ");
    insert_begin();
    print_list();
    printf("\nprinting the elements of linked list: ");
    insert_last();
    print_list();
    printf("\nprinting the elements of linked list: ");
    insert_mid();
    print_list();
}