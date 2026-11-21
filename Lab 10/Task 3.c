#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    char domain[100];

    printf("Enter employee email address: ");
    scanf("%s", email);

    char *atPtr = strchr(email, '@');

    if (atPtr == NULL || *(atPtr + 1) == '\0') {
        printf("invalid email format\n");
    } else {
        strcpy(domain, atPtr + 1);
        printf("extracted domain: %s\n", domain);
    }
    return 0;
}



