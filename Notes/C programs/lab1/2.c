#include <stdio.h>

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  int reversed_number = 0;
  int original_number = n;

  while (n > 0) {
    reversed_number = reversed_number * 10 + n % 10;
    n /= 10;
  }

  if (reversed_number == original_number) {
    printf("%d is a palindrome number.\n", original_number);
  } else {
    printf("%d is not a palindrome number.\n", original_number);
  }

  return 0;
}
