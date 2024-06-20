#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
void print(struct node *head,int size)
{
    for(int i=0;i<size*2;i++)
    {
        printf("%d ",head->data);
        head=head->next;
    }
}
int main()
{
    int val,size;
    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *p, *last;
    p = head;
    last = head;
    printf("Enter tha number of node you wants to enter: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        if(i==0)
        {
            printf("Enter the value of first node: ");
            scanf("%d",&val);
            head->data=val;
            head->next=head;

        }
        else
        {
            struct node *newnode=(struct node *)malloc(sizeof(struct node));
            printf("Enter the value of the next node: ");
            scanf("%d",&val);
            newnode->data=val;
            newnode->next=head;

            p->next=newnode;
            p=p->next;
            last = p->next;
        }
        
    }
    print(last,size);
    return 0;
    

}