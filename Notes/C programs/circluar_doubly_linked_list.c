#include<stdio.h>


struct node
{
    int data;
    struct node *next;
    struct node *pre;
};

void main()
{
    struct node *head,*last, *p, *new;
    int size;
    head = (struct node*) malloc(sizeof(struct node));
    printf("Enter tha number of node you wants to enter: ");
    scanf("%d",&size);
    printf("Enter the Value: ");
    scanf("%d",&head->data);
    p = head;
    head->next = head;
    head->pre = head;
    last = head;

    for(int i = 1; i<size; i++)
    {
         new = (struct node*) malloc(sizeof(struct node));
        printf("Enter the Value: ");
        scanf("%d",&new->data);
        p->next = new;
        new->next = head;
        new->pre = p;
        head->pre = new;
        p = p->next;
        last = last->next;
    }

    p = head;
    printf("Printing The Circular LinkedList: \n");
    do
    {
        printf("%d ", p->data);
        p = p->next;
    } while (p != head);

    p = last;
    printf("\nPrinting The Circular LinkedList Backward: \n");
    do
    {
        printf("%d ", p->data);
        p = p->next;
    } while (p != last);

    while(p -> data )
    
}