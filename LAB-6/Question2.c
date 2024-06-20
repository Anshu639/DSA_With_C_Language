#include <stdio.h>
#include <string.h>

// Define the structure for customer data
struct Customer
{
    int account_number;
    char name[50];
    double balance;
};

int main()
{
    // Declare an array of Customer structures to store customer data
    struct Customer customers[200];

    int num_customers;

    // Prompt the user to enter the number of customers (up to 200)
    printf("Enter the number of customers (up to 200): ");
    scanf("%d", &num_customers);

    // Input customer data for each customer
    for (int i = 0; i < num_customers; i++)
    {
        printf("Customer #%d:\n", i + 1);

        // Input account number
        printf("Account Number: ");
        scanf("%d", &customers[i].account_number);

        // Input customer name (assuming single-word names)
        printf("Name: ");
        scanf("%s", customers[i].name);

        // Input customer balance
        printf("Balance: ");
        scanf("%lf", &customers[i].balance);
    }

    // Display customer data
    printf("\nCustomer Data:\n");
    for (int i = 0; i < num_customers; i++)
    {
        printf("Customer #%d:\n", i + 1);
        printf("Account Number: %d\n", customers[i].account_number);
        printf("Name: %s\n", customers[i].name);
        printf("Balance: %.2lf\n", customers[i].balance);
    }

    return 0;
}
