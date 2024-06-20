#include<stdio.h>
#include<string.h>

struct Student{
    long int sapid;
    float marks;
    char name[20];
};

int main()
{
    struct Student stud[5];

    for(int i=0; i<5;i++)
    {
        printf("\nEnter the details of %d student : \n",i+1);

        printf("Enter the sap id : ");
        scanf("%ld",&stud[i].sapid);
        
        printf("Enter the name   : ",i+1);
        scanf("%s",&stud[i].name);

        printf("Enter the marks  : ",i+1);
        scanf("%f",&stud[i].marks);
    }

    for(int i=0;i<5;i++)
    {
        printf("\n\nThe details of %dth student : \n",i+1);
        printf("\n\tSap Id  : \t%ld\n",stud[i].sapid);
        printf("\n\tName    : \t%s\n",stud[i].name);
        printf("\n\tMarks   : \t%.2f\n",stud[i].marks);
    }
}