#include <stdio.h>

void printSensorData(void *ptr, char type) {
    if (type == 'f') {
        printf("Temperature: %.2f C\n", *(float *)ptr);
    } else if (type == 'i') {
        if (*(int *)ptr == 1) {
            printf("Motion Detected\n");
        } else if (*(int *)ptr == 0) {
            printf("No Motion\n");
        } else {
            printf("Invalid Motion Value\n");
        }
    } else if (type == 'c') {
        if (*(char *)ptr == 'O' || *(char *)ptr == 'o') {
            printf("Door Open\n");
        } else if (*(char *)ptr == 'C' || *(char *)ptr == 'c') {
            printf("Door Closed\n");
        } else {
            printf("Invalid Door Value\n");
        }
    }
}

int main() {
    float temperature;
    int motion;
    char door;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &temperature);

    printf("Enter motion status (1 for Motion, 0 for No Motion): ");
    scanf("%d", &motion);

    printf("Enter door lock status (O for Open, C for Closed): ");
    scanf(" %c", &door);

    printf("\n--- Smart Home Sensor Readings ---\n");
    printSensorData(&temperature, 'f');
    printSensorData(&motion, 'i');
    printSensorData(&door, 'c');

    return 0;
}








