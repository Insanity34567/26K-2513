#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char iUser[50], iPass[50];
    char storedU[50], storedP[50];

    printf("Enter Username: ");
    scanf("%s", iUser);

    printf("Enter Password: ");
    scanf("%s", iPass);

    FILE *fptr = fopen("credentials.txt", "r");
    if (fptr == NULL) {
        printf("Error: Unable to open credentials.txt!\n");
        exit(1);
    }
    if (fscanf(fptr, "%s %s", storedU, storedP) == 2 &&
        strcmp(iUser, storedU) == 0 &&
        strcmp(iPass, storedP) == 0) {
        printf("access Granted!\n");
    } else {
        printf("access Denied!\n");
    }

    fclose(fptr);

    
    
    return 0;
}





