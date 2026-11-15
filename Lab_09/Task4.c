#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int findMax(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int compute(int a, int b, int (*operation)(int, int)) {
    return operation(a, b);
}

int main() {
    int num1, num2;
    int sumResult, prodResult, maxResult;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    sumResult = compute(num1, num2, add);
    prodResult = compute(num1, num2, multiply);
    maxResult = compute(num1, num2, findMax);

    printf("\n--- Results ---\n");
    printf("Sum:     %d\n", sumResult);
    printf("Product: %d\n", prodResult);
    printf("Maximum: %d\n", maxResult);

    return 0;
}



