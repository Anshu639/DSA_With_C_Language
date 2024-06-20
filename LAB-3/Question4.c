#include <stdio.h>
void main()
{
    int initial_population = 100000;
    double growth_rate = 0.10;
    int years = 10;
    int population;
    for (int i = 0; i < years; i++)
    {
        population = 100000 + (int)(initial_population * growth_rate);
        printf("%d \t %d\n", i, population);
        initial_population = population;
    }
}