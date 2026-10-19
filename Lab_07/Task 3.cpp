#include <stdio.h>

int main() {
    char secret_messages[3][100];
    for (int i = 0; i < 3; i++) {
        printf("Enter message %d: ", i + 1);
        scanf(" %[A-Z ]", secret_messages[i]);
  
        while (getchar() != '\n'); 
    }
	printf("\n");
    for (int i = 0; i < 3; i++) {
        int words = 1;
        for (int j = 0; secret_messages[i][j] != '\0'; j++) {
            if (secret_messages[i][j] == ' ') {
                words++;
            }
        }
        if (secret_messages[i][0] == '\0') {
            words = 0;
        }

        printf("Message %d: %s\n", i + 1, secret_messages[i]);
        printf("Word Count: %d\n\n", words);
    }

    return 0;
}
