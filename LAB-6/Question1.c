#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to represent cricketer data
struct cricketer
{
    char name[50];
    int crick_age;
    int match;
    float avg_match;
};

// Comparison function for qsort to compare cricketers based on average runs
int compare(const void *a, const void *b)
{
    const struct cricketer *cricketerA = (const struct cricketer *)a;
    const struct cricketer *cricketerB = (const struct cricketer *)b;

    return (cricketerA->avg_match > cricketerB->avg_match) - (cricketerA->avg_match < cricketerB->avg_match);
}

int main()
{
    int i, n;

    // Prompt the user to enter the number of cricketers' data
    printf("Enter the number of cricketers' data you want to insert: ");
    scanf("%d", &n);

    // Declare an array of structures to store cricketer data
    struct cricketer obj1[20];

    // Input cricketer data from the user
    for (i = 0; i < n; i++)
    {
        printf("Enter data of cricketer %d\n", i + 1);
        printf("Name: ");
        scanf("%s", obj1[i].name);
        printf("Age: ");
        scanf("%d", &obj1[i].crick_age);
        printf("Matches: ");
        scanf("%d", &obj1[i].match);
        printf("Average runs: ");
        scanf("%f", &obj1[i].avg_match);
    }

    // Sort the records using qsort and the compare function
    qsort(obj1, n, sizeof(struct cricketer), compare);

    // Display the sorted records
    printf("Sorted records:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\t%d\t%.2f\n", i + 1, obj1[i].name, obj1[i].crick_age, obj1[i].match, obj1[i].avg_match);
    }

    return 0;
}
