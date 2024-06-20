#include <stdio.h>

int main() {
  int year;
  printf("Enter a year: ");
  scanf("%d", &year);

  int day_of_week = (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400 + 1;
  day_of_week %= 7;

  // The day of the week on January 1st, 0001 was a Monday.
  char *days_of_week[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

  printf("January 1st, %d was a %s.\n", year, days_of_week[day_of_week]);

  return 0;
}
