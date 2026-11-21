#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char name[100];
    int accountNumber;
    float amount;

    printf("Enter Customer Name : ");
    fgets(name, sizeof(name), stdin);
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    printf("Enter Account number : ");
    scanf("%d", &accountNumber);

    printf("Enter Withdrawal amount : ");
    scanf("%f", &amount);

    FILE *fptr = fopen("bank_log.txt", "a");
    if (fptr == NULL) {
        printf("Error: Unable to open bank_log.txt!\n");
        exit(1);
    }

    fprintf(fptr, "Customer Name: %s\nAccount No: %d\nWithdrawal: %.2f\n",
            name, accountNumber, amount);
    fclose(fptr);

    printf("Transaction recorded successfully in bank_log.txt.\n");

    return 0;
}



