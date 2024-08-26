/*
Create a structure representing a bank account of a customer. What fields did you use and why?
*/
// #include<stdio.h>

// struct bank{
//     int accountNo;
//     char name[20];
//     float balance;
//     char branchCode[15];

// };
// int main ()
// {
    
//     return 0;
// }

#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char account_number[20];
    float balance;
    int account_type; // 0 for savings, 1 for current
} bank_account;

int main() {
    bank_account account;

    // Initialize the account with some values
    strcpy(account.name, "John Doe");
    strcpy(account.account_number, "1234567890");
    account.balance = 5000.0;
    account.account_type = 0;

    // Print the account details
    printf("Name: %s\n", account.name);
    printf("Account Number: %s\n", account.account_number);
    printf("Balance: %.2f\n", account.balance);
    printf("Account Type: %s\n", account.account_type == 0? "Savings" : "Current");

    return 0;
}
/*
we define a structure bank_account with four fields:

name: a character array to store the name of the customer
account_number: a character array to store the account number of the customer
balance: a floating-point number to store the balance of the account
account_type: an integer to store the type of the account (0 for savings, 1 for current)
We initialize the account with some values and print the account details using the printf function.

The name field is used to store the name of the customer. 
The account_number field is used to store the account number of the customer. 
The balance field is used to store the balance of the account. 
The account_type field is used to store the type of the account (0 for savings, 1 for current).

These fields are used to store the necessary information about the bank account of a customer. 
The name and account_number fields are used to identify the customer and the account. 
The balance field is used to store the current balance of the account. 
The account_type field is used to differentiate between savings and current accounts.

Note that the account_type field is an integer, and we use a conditional operator to print the account type as a string. 
This is because the printf function expects a string argument for the %s format specifier.
*/