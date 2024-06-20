#include<stdio.h>

void main()
{
    char str[10],value;
    int i,pos,n=10;

    for(i=0;i<n;i++)
    {
        printf("Enter %d character : ",i+1);
        fflush(stdin);
        scanf("%c",&str[i]);
    }

    printf("\nCharacter Array is : \n");
    for(i=0;i<n;i++)
    {
        printf("%c \t",str[i]);
    }

    printf("\nEnter the position where you want to replace the character : ");
    fflush(stdin);
    scanf("%d",&pos);

    if(pos>=n+1)
        printf("\nDeletion not possible !");
    else
    {
        for(i=pos-1;i<n-1;i++)
            str[i]=str[i+1];
    }


    printf("\nEnter the character you want to insert : ");
    fflush(stdin);
    scanf("%c",&value);

    for(i=n-1;i>=pos;i--)
        str[i+1]=str[i];

    str[pos-1]=value;
 

    printf("\nNewArray is : \n");

        for(i=0;i<10;i++)
    {
        printf("%c",str[i]);
    }
    
    
}