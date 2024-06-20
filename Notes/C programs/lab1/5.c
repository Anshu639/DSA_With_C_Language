#include <stdio.h>

// Function to calculate the nth Fibonacci number recursively
int fibonacci_recursive(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
    }
}

int main() {
    int n;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci_recursive(i));
    }

    printf("\n");

    return 0;
}
