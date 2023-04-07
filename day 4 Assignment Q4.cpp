#include <stdio.h>

struct Customer {
    int acc_no;
    char name[50];
    float balance;
};

void print_low_balance(struct Customer cust[], int n) {
    int i;

    printf("\nCustomer Details whose Balance < 100 Rs.\n");
    for (i = 0; i < n; i++) {
        if (cust[i].balance < 100) {
            printf("Account Number: %d\n", cust[i].acc_no);
            printf("Name: %s\n", cust[i].name);
            printf("Balance: %.2f\n", cust[i].balance);
        }
    }
}

int main() {
    struct Customer cust[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("\nEnter Details of Customer %d\n", i+1);
        printf("Enter Account Number: ");
        scanf("%d", &cust[i].acc_no);
        printf("Enter Name: ");
        scanf("%s", cust[i].name);
        printf("Enter Balance: ");
        scanf("%f", &cust[i].balance);
    }

    // Call function to print details of customers with balance < 100 Rs
    print_low_balance(cust, 3);

    return 0;
}