#include <stdio.h>
int main() {
    char word_grid[3][100];
    
    char longest_word[100];
    int max_len = 0;
    int max_row = 0;
    int max_col = 0;
    for (int i = 0; i < 3; i++) {
        printf("Enter 3 words for row %d: ", i);
        scanf(" %[^\n]", word_grid[i]); 
    }
	for (int i = 0; i < 3; i++) {
        int j = 0;   
        int col = 0; 
        while (word_grid[i][j] != '\0') {
            int current_len = 0;
            int start_idx = j;
			while (word_grid[i][j] != ' ' && word_grid[i][j] != '\0') {
                current_len++;
                j++;
            }
			if (current_len > max_len) {
                max_len = current_len;
                max_row = i;
                max_col = col;
				int k;
                for (k = 0; k < current_len; k++) {
                    longest_word[k] = word_grid[i][start_idx + k];
                }
                longest_word[k] = '\0';
            }
			if (word_grid[i][j] == ' ') {
                j++;
                col++;
            }
        }
    }
	printf("\n--- Results ---\n");
    printf("Longest Word: %s\n", longest_word);
    printf("Row Index (i): %d\n", max_row);
    printf("Column Index (j): %d\n", max_col);
	
	return 0;
}





