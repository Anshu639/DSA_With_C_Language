#include <stdio.h>

int main() {
  int n;
  printf("Enter the number of elements in the list: ");
  scanf("%d", &n);

  int list[n];
  printf("Enter the elements of the list: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &list[i]);
  }

  int largest = list[0];
  int second_largest = list[1];

  for (int i = 2; i < n; i++) {
    if (list[i] > largest) {
      second_largest = largest;
      largest = list[i];
    } else if (list[i] > second_largest && list[i] != largest) {
      second_largest = list[i];
    }
  }

  printf("The second largest integer in the list is %d.\n", second_largest);

  return 0;
}
