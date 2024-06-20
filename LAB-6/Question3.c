#include <stdio.h>
#include <string.h>

// Define the structure for customer data
struct Customer
{
    int account_number;
    char name[50];
    double balance;
};

// Function to print customers with a balance below Rs 100
void printCustomersBelow100(struct Customer customers[], int num_customers)
{
    printf("Customers with a balance below Rs 100:\n");
    for (int i = 0; i < num_customers; i++)
    {
        if (customers[i].balance < 100.0)
        {
            printf("Account Number: %d\n", customers[i].account_number);
            printf("Name: %s\n", customers[i].name);
            printf("Balance: %.2lf\n", customers[i].balance);
            printf("\n");
        }
    }
}

int main()
{
    struct Customer customers[200];

    int num_customers;

    // Prompt the user to enter the number of customers
    printf("Enter the number of customers: ");
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

    // Call the function to print customers with a balance below Rs 100
    printCustomersBelow100(customers, num_customers);

    return 0;
}
