#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    int pow;
    struct node *next;
} *head1, *p1, *temp, *head2, *head3, *p2, *p3;

int create_list1(int n)
{
    head1 = (struct node *)malloc(sizeof(struct node));
    printf("Enter constant: ");
    scanf("%d", &head1->data);
    printf("Enter Power: ");
    scanf("%d", &head1->pow);
    head1->next = NULL;
    p1 = head1;
    for (int i = 1; i < n; i++)
    {
        p1->next = (struct node *)malloc(sizeof(struct node));
        p1 = p1->next;
        printf("Enter constant: ");
        scanf("%d", &p1->data);
        printf("Enter Power: ");
        scanf("%d", &p1->pow);
        p1->next = NULL;
    }
    return 0;
}

int create_list2(int n)
{
    head2 = (struct node *)malloc(sizeof(struct node));
    printf("Enter constant: ");
    scanf("%d", &head2->data);
    printf("Enter Power: ");
    scanf("%d", &head2->pow);
    head2->next = NULL;
    p2 = head2;
    for (int i = 1; i < n; i++)
    {
        p2->next = (struct node *)malloc(sizeof(struct node));
        p2 = p2->next;
        printf("Enter constant: ");
        scanf("%d", &p2->data);
        printf("Enter Power: ");
        scanf("%d", &p2->pow);
        p2->next = NULL;
    }
    return 0;
}

int print_polynomial_1()
{
    temp = head1;
    while (temp != NULL)
    {
        printf("%dx^%d ", temp->data, temp->pow);
        temp = temp->next;
    }
    return 0;
}

int print_polynomial_2()
{
    temp = head2;
    while (temp != NULL)
    {
        printf("%dx^%d ", temp->data, temp->pow);
        temp = temp->next;
    }
    return 0;
}

void subtract_polynomials()
{
    p1 = head1;
    p2 = head2;
    head3 = (struct node *)malloc(sizeof(struct node));
    p3 = head3;

    while (p1 != NULL && p2 != NULL)
    {
        if (p1->pow == p2->pow)
        {
            p3->pow = p1->pow;
            p3->data = p1->data - p2->data;
            p1 = p1->next;
            p2 = p2->next;
        }

        if (p1 != NULL || p2 != NULL)
        {
            p3->next = (struct node *)malloc(sizeof(struct node));
            p3 = p3->next;
            p3->next = NULL;
        }
    }
}

void print_subtracted_polynomial()
{
    temp = head3;
    printf("Subtracted polynomial is: ");
    while (temp != NULL)
    {
        printf("%dx^%d ", temp->data, temp->pow);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    create_list1(n);
    printf("Equation 1 is: ");
    print_polynomial_1();
    printf("\n");

    create_list2(n);
    printf("Equation 2 is: ");
    print_polynomial_2();
    printf("\n");

    subtract_polynomials();
    print_subtracted_polynomial();

    return 0;
}
