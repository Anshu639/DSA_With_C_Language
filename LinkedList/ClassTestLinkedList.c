#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    int data;
    char city[10];
    struct node *next;
};

void main()
{
    struct node *head, *p, *q, *r, *s, *temp;
    int position;
    head = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value: ");
    scanf("%d", &head->data);
    printf("Enter the City: ");
    scanf("%s", &head->city);
    head->next = NULL;
    p = head;
    for (int i = 1; i < 5; i++)
    {
        p->next = (struct node *)malloc(sizeof(struct node));
        p = p->next;
        printf("Enter the value: ");
        scanf("%d", &p->data);
        printf("Enter the City: ");
        scanf("%s", &p->city);
        p->next = NULL;
    }
    // int count = 0;
    p = head;
    printf("Printing The LinkedList: \n");
    while (p != NULL)
    {
        printf("%d %s\n", p->data, p->city);
        p = p->next;
        // count +=1;
    }
    p = head;
    printf("now enter the data to insert \n");

    s = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value: ");
    scanf("%d", &s->data);
    printf("Enter the City: ");
    scanf("%s", s->city);

    while (p != NULL)
    {
        if (strcmp(p->city, "Delhi") == 0)
        {

            s->next = p->next;
            p->next = s;
        }
        p = p->next;
    }
    s = head;
    printf("Printing The LinkedList: \n");
    while (s != NULL)
    {
        printf("%d ", s->data);
        s = s->next;
    }
}