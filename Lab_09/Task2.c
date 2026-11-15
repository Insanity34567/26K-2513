#include <stdio.h>

void withdraw(float *balance, float amount) {
    if (amount <= *balance) {
        *balance = *balance - amount;
        printf("Transaction Successful: PKR %.2f withdrawn.\n", amount);
    } else {
        printf("Transaction Declined: Insufficient Balance\n");
    }
}

void deposit(float *balance, float amount) {
    *balance = *balance + amount;
    printf("Deposit Successful! Updated Balance: PKR %.2f\n", *balance);
}

int main() {
    float balance = 10000.0f;
    float amount;
    char choice;

    printf("Current Account Balance: PKR %.2f\n", balance);
    printf("Select transaction type (D for Debit/Withdraw, C for Credit/Deposit): ");
    scanf(" %c", &choice);

    printf("Enter transaction amount (PKR): ");
    scanf("%f", &amount);

    if (amount <= 0.0f) {
        printf("Invalid amount. Transaction cancelled.\n");
        return 1;
    }

    if (choice == 'D' || choice == 'd') {
        withdraw(&balance, amount);
    } else if (choice == 'C' || choice == 'c') {
        deposit(&balance, amount);
    } else {
        printf("Invalid transaction type selected.\n");
    }

    printf("Final Account Balance: PKR %.2f\n", balance);

    return 0;
}








