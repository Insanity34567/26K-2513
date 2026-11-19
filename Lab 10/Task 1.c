#include <stdio.h>
#include <string.h>

int main() {
    char feedback[500];
    char updated[1000];
    char *pos;

    printf("Enter customer feedback: ");
    fgets(feedback, sizeof(feedback), stdin);

    printf("\nTotal characters are: %lu\n", strlen(feedback));

    int hasGood = (strstr(feedback, "good") != NULL);
    int hasBad = (strstr(feedback, "bad") != NULL);

    if (hasGood) {
        printf("Positive feedback detected.\n");
    } else if (hasBad) {
        printf("Negative feedback detected.\n");
    }
    while ((pos = strstr(feedback, "bad")) != NULL) {
        int prefixLen = pos - feedback;
        updated[0] = '\0';

        strncat(updated, feedback, prefixLen);
        strcat(updated, "not good");
        strcat(updated, pos + 3);
        strcpy(feedback, updated);
    }

    printf("Sanitized Feedback: %s\n", feedback);

    return 0;
}


