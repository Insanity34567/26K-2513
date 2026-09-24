#include <stdio.h>

int main() {
    float confidence, threshold;

    printf("Enter the AI model's confidence score (0-100): ");
    scanf("%f", &confidence);
    printf("Enter the required confidence threshold: ");
    scanf("%f", &threshold);

    printf("\n--- Results ---\n");

    if (confidence >= 90) {
        printf("Confidence Level: Very High\n");
    } else if (confidence >= 75) {
        printf("Confidence Level: High\n");
    } else if (confidence >= 50) {
        printf("Confidence Level: Moderate\n");
    } else {
        printf("Confidence Level: Low\n");
    }

    if (confidence >= threshold && confidence >= 50) {
        printf("Status: Accepted\n");
    } else {
        printf("Status: Rejected\n");
    }

    return 0;
}
