#include <stdio.h>
int main() {
    char sentences[3][100];
	printf("Enter 3 semicolon-separated sentences:\n");
	for (int i = 0; i < 3; i++) {
        scanf(" %[^;]%*c", sentences[i]); 
    }
    printf("\n--- Vowel Density Report ---\n");
    for (int i = 0; i < 3; i++) { 
        int vowel_count = 0;
        for (int j = 0; sentences[i][j] != '\0'; j++) {
            char c = sentences[i][j];
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' 
				|| c == 'U') {
                vowel_count++;
            }
        }
    	printf("Sentence %d: %s\n", i + 1, sentences[i]);
        printf("Vowel Count: %d\n\n", vowel_count);
    }

    return 0;
}




