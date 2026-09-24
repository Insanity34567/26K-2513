#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num, base, exponent;

    printf("--- Mathematical Operations Menu ---\n");
    printf("1. Square Root\n");
    printf("2. Power\n");
    printf("3. Absolute Value\n");
    printf("4. Floor\n");
    printf("5. Ceiling\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter a number: ");
            scanf("%lf", &num);
            if (num >= 0) {
                printf("Square Root: %.4lf\n", sqrt(num));
            } else {
                printf("Error: Cannot calculate the square root of a negative number.\n");
            }
            break;
            
        case 2: 
            printf("Enter base: ");
            scanf("%lf", &base);
            printf("Enter exponent: ");
            scanf("%lf", &exponent);
            printf("Result: %.4lf\n", pow(base, exponent));
            break;
            
        case 3: 
            printf("Enter a number: ");
            scanf("%lf", &num);
            
            printf("Absolute Value: %.4lf\n", fabs(num));
            break;
            
        case 4: 
            printf("Enter a number: ");
            scanf("%lf", &num);
            printf("Floor Value: %.4lf\n", floor(num));
            break;
            
        case 5: 
            printf("Enter a number: ");
            scanf("%lf", &num);
            printf("Ceiling Value: %.4lf\n", ceil(num));
            break;
            
        default: 
            printf("Error: Invalid menu choice. Please select an option from 1 to 5.\n");
    }

    return 0;
}
