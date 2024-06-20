#include<stdio.h>
#include<stdlib.h>

struct node{
    int coff;
    int exp;
    struct node*next;
};
struct node*head=NULL;

struct node2{
    int coff2;
    int exp2;
    struct node2*next2;
};
struct node2*head2=NULL;

struct node3{
    int coff3;
    int exp3;
    struct node3*next3;
};
struct node3*head3=NULL;

void createlist(){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the cofficient of x :");
    scanf("%d",&newnode->coff);
    printf("Enter the exponent of x :");
    scanf("%d",&newnode->exp);
    newnode->next=NULL;

    if(head==NULL){
        head=newnode;
    }
    else{
        struct node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}

void create(){
    struct node2*newnode=(struct node2*)malloc(sizeof(struct node2));
    printf("Enter the cofficient of x :");
    scanf("%d",&newnode->coff2);
    printf("Enter the exponent of x :");
    scanf("%d",&newnode->exp2);
    newnode->next2=NULL;

    if(head2==NULL){
        head2=newnode;
    }
    else{
        struct node2*temp=head2;
        while(temp->next2!=NULL){
            temp=temp->next2;
        }
        temp->next2=newnode;
    }
}

void add(){
    struct node*temp1=head;
    struct node2*temp2=head2;

    while(temp1!=NULL || temp2!=NULL){
        struct node3*newnode=(struct node3*)malloc(sizeof(struct node3));
        newnode->next3=NULL;

        if(!head3){
            head3=newnode;

        }
        else{
            struct node3*temp3=head3;
            while(temp3->next3!=NULL){   
                temp3=temp3->next3;
            }
            temp3->next3=newnode;
        }

        if(temp2 &&(!temp1 ||temp1->exp>temp2->exp2)){
            newnode->exp3=temp1->exp;
            newnode->coff3=temp1->coff;
            temp1=temp1->next;
        }
        else if(temp1 && (!temp2 || temp1->exp<temp2->exp2)){
            newnode->exp3=temp2->exp2;
            newnode->coff3=temp2->coff2;
            temp2=temp2->next2;
        }
        else{
            newnode->coff3=temp1->coff+temp2->coff2;
            newnode->exp3=temp1->exp;
            temp1=temp1->next;
            temp2=temp2->next2;
        }
    }

}

void display(){
    if(head==NULL){
        printf("there is no node is created :");

    }
    else{
        struct node*temp=head;
        while(temp->next!=NULL){
            printf("%dx^%d + ",temp->coff,temp->exp);
            temp=temp->next;
        }
        if(temp->exp==0){
            printf("%d",temp->coff);
        }
        else{
            printf("%dx^%d",temp->coff,temp->exp);
        }
    }
}

void display2(){
    if(head==NULL){
        printf("there is no node is created :");

    }
    else{
        struct node2*temp=head2;
        while(temp->next2!=NULL){
            printf("%dx^%d + ",temp->coff2,temp->exp2);
            temp=temp->next2;
        }
        if(temp->exp2==0){
            printf("%d",temp->coff2);
        }
        else{
            printf("%dx^%d",temp->coff2,temp->exp2);
        }
    }
}

void displayResult(){
    if(head3==NULL){
        printf("there is no node is created :");

    }
    else{
        struct node3*temp=head3;
        while(temp->next3!=NULL){
            printf("%dx^%d + ",temp->coff3,temp->exp3);
            temp=temp->next3;
        }
        if(temp->exp3==0){
            printf("%d",temp->coff3);
        }
        else{
            printf("%dx^%d",temp->coff3,temp->exp3);
        }
    }
}

int main(){
   
    int x;
    printf("Enter the total number of terms :");
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        createlist();
    }

    int y;
    printf("Enter the total number of terms :");
    scanf("%d",&y);
    for(int i=0;i<y;i++){
        create();
    }

    printf("First Polynomial: ");
    display();
    printf("\n");

    printf("Second Polynomial: ");
    display2();
    printf("\n");

    add();
    printf("Result Polynomial: ");
    displayResult();
    printf("\n");

    return 0;
}