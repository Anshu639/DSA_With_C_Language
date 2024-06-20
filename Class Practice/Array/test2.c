#include <stdio.h>

int main()
{
    int num, green, purple, a[10][2], greensum, purplesum, answer;
    scanf("%d", &num); // Reading input from STDIN
    printf("Input number is %d.\n", num);
    for (int i = 0; i < num; i++)
    {
        greensum = purplesum = 0;
        int participant;
        scanf("%d %d", &green, &purple);
        scanf("%d", &participant);
        for (int j = 0; j < participant; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                scanf("%d", &a[j][k]);
            }
        }
        for (int j = 0; j < participant; j++)
        {
            if (a[j][0] == 1)
            {
                greensum += green;
            }
            else if (a[j][1] == 1)
            {
                greensum += purple;
            }
        }
        for (int j = 0; j < participant; j++)
        {
            if (a[j][0] == 1)
            {
                purplesum += green;
            }
            else if (a[j][1] == 1)
            {
                purplesum += purple;
            }
        }

        answer = purplesum > greensum ? purplesum : greensum;
        printf("%d\n", answer);
    }
}