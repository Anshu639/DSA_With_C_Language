#include <stdio.h>

int main() {
  int population = 100000;
  int growth_rate = 10;
  int years = 10;

  for (int year = 1; year <= years; year++) {
    population *= (1 + growth_rate / 100.0);
    printf("The population at the end of year %d is %d.\n", year, population);
  }

  return 0;
}
