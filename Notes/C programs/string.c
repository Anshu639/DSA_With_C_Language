#include<stdio.h>
#include<string.h>
void  main()
{
    char chr[6] ;
    printf("Enter an arry of string");
    gets(chr);

    printf("Your string  is : ");
    puts(chr);

    char str1[12]="hello";
    char str2[12]="world";
    char str3[12];

    printf("\n");
    strcpy(str3,str1);
    printf("%s\n",str3);
    strcat(str1,str2);
    printf("%s\n",str1);
    printf("%d\n",strlen(str3));
    printf("%d\n",strcmp(str1,str2));
    printf("%d\n",strcmp(str1,str3));

    printf("%s\n",strrev(str3));


}