#include <stdio.h>
#include <string.h>

// Define the structure for customer data
struct Customer
{
    int account_number;
    char name[50];
    double balance;
};

// Function to perform a deposit or withdrawal transaction
void performTransaction(struct Customer customers[], int num_customers, int acct_no, double amount, int code)
{
    for (int i = 0; i < num_customers; i++)
    {
        if (customers[i].account_number == acct_no)
        {
            if (code == 1)
            {
                // Deposit
                customers[i].balance += amount;
                printf("Deposit of Rs %.2lf successful.\n", amount);
            }
            else if (code == 0)
            {
                // Withdrawal
                if (customers[i].balance - amount < 100.0)
                {
                    printf("The balance is insufficient for the specified withdrawal.\n");
                }
                else
                {
                    customers[i].balance -= amount;
                    printf("Withdrawal of Rs %.2lf successful.\n", amount);
                }
            }
            else
            {
                printf("Invalid transaction code.\n");
            }
            return;
        }
    }

    printf("Account number %d not found.\n", acct_no);
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

    int acct_no, code;
    double amount;

    // Prompt the user to enter transaction details
    printf("Enter Account Number: ");
    scanf("%d", &acct_no);
    printf("Enter Transaction Code (1 for Deposit, 0 for Withdrawal): ");
    scanf("%d", &code);
    printf("Enter Amount: ");
    scanf("%.2lf", &amount);

    // Call the function to perform the transaction
    performTransaction(customers, num_customers, acct_no, amount, code);

    return 0;
}
