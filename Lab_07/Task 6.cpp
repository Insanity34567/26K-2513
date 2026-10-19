#include <stdio.h>

int main() {
    int shifts[4][3]; 
    int target_index;
    int new_row[3];

    printf("Enter initial 3x3 data:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &shifts[i][j]);
        }
    }

    printf("\nEnter target row index: ");
    scanf("%d", &target_index);

    printf("Enter 3 new values for the row: ");
    for (int j = 0; j < 3; j++) {
        scanf("%d", &new_row[j]);
    }

	for (int i = 3; i > target_index; i--) {
        for (int j = 0; j < 3; j++) {
            shifts[i][j] = shifts[i - 1][j]; 
        }
    }

    for (int j = 0; j < 3; j++) {
        shifts[target_index][j] = new_row[j];
    }

    printf("\n\nResulting 4x3 matrix:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", shifts[i][j]); 
        }
        printf("\n");
    }

    return 0;
}






