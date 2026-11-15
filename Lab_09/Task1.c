#include <stdio.h>

float calculateDiscount(float amount, char membership) {
    float rate = 0.0f;

    if (membership == 'P' || membership == 'p') {
        rate = 0.20f;
    } else if (membership == 'G' || membership == 'g') {
        rate = 0.10f;
    } else if (membership == 'S' || membership == 's') {
        rate = 0.05f;
    }

    if (amount > 10000.0f) {
        rate += 0.02f;
    }

    return amount * rate;
}

float calculateFinalBill(float discountedAmount) {
    float tax = discountedAmount * 0.15f;
    float shipping = 0.0f;

    if (discountedAmount <= 5000.0f) {
        shipping = 300.0f;
    }

    return discountedAmount + tax + shipping;
}

int main() {
    char membership;
    float cartAmount, discount, discountedAmount, finalBill;

    printf("Enter membership type (P for Platinum, G for Gold, S for Standard): ");
    scanf(" %c", &membership);

    if (membership != 'P' && membership != 'p' &&
        membership != 'G' && membership != 'g' &&
        membership != 'S' && membership != 's') {
        printf("Invalid membership type entered.\n");
        return 1;
    }

    printf("Enter total shopping cart amount (PKR): ");
    scanf("%f", &cartAmount);

    if (cartAmount < 0) {
        printf("Invalid shopping amount.\n");
        return 1;
    }

    discount = calculateDiscount(cartAmount, membership);
    discountedAmount = cartAmount - discount;
    finalBill = calculateFinalBill(discountedAmount);

    printf("\n   Billing Summary\n");
    printf("Original Amount:   PKR %.2f\n", cartAmount);
    printf("Discount Applied:  PKR %.2f\n", discount);
    printf("Discounted Amount: PKR %.2f\n", discountedAmount);
    printf("Final Payable Bill (incl. 15%% tax & shipping): PKR %.2f\n", finalBill);

    return 0;
}




