#include <stdio.h>

int main() {
    double dataUsed, pricePerGB;
    double basicCost, discountPercentage = 0.0, discountAmount, finalCost;

    printf("Enter data used in GB: ");
    scanf("%lf", &dataUsed);

    printf("Enter price per GB: ");
    scanf("%lf", &pricePerGB);
    
    basicCost = dataUsed * pricePerGB;

    if (dataUsed < 50.0) {
        discountPercentage = 0.0;
    } else if (dataUsed >= 50.0 && dataUsed <= 99.0) {
        discountPercentage = 0.05;
    } else if (dataUsed >= 100.0 && dataUsed <= 199.0) {
        discountPercentage = 0.10;
    } else if (dataUsed >= 200.0) {
        discountPercentage = 0.15;
    }

    discountAmount = basicCost * discountPercentage;
    finalCost = basicCost - discountAmount;

    printf("1. Basic Cost: %.2f\n", basicCost);
    printf("2. Discount Amount: %.2f\n", discountAmount);
    printf("3. Final Cost: %.2f\n", finalCost);

    return 0;
}
