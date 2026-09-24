#include <stdio.h>

int main() {
    int age, credit, existing;
    float income;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter monthly income: ");
    scanf("%f", &income);
    printf("Enter credit score: ");
    scanf("%d", &credit);
    printf("Existing loan? (Enter 1 for Yes, 0 for No): ");
    scanf("%d", &existing);

    if (age >= 21) {
        
        if (income >= 100000 && credit>= 750 && existing == 0) {
            printf("\nDecision: High Approval Chance\n");
            
        } else if (income >= 75000 && credit >= 650 && existing== 1) {
            printf("\nDecision: Manual Review\n");
            
        } else if (income >= 50000 && credit >= 600) {
            printf("\nDecision: Possibly Eligible\n");
            
        } else {
            printf("\nDecision: Rejected\n");
        }
        
    } else {
        printf("\nDecision: Rejected\n");
    }

    return 0;
}
