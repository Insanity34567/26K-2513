#include <stdio.h>
int main() {
    float sensor_data[3][4];
    int target_col;
	printf("Enter temperature readings for 3 days (4 sensors per day):\n");
    for (int r = 0; r < 3; r++) {
        printf("Day %d: ", r + 1);
        for (int c = 0; c < 4; c++) {
            scanf("%f", &sensor_data[r][c]);
        }
    }
	printf("\nEnter defective sensor column index to remove (0 to 3): ");
    scanf("%d", &target_col);
	for (int r = 0; r < 3; r++) {
        for (int c = target_col; c < 3; c++) {
            sensor_data[r][c] = sensor_data[r][c + 1];
        }
    }
	printf("\nUpdated 3x3 Sensor Matrix:\n");
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            printf("%.2f\t", sensor_data[r][c]);
        }
        printf("\n");
    }

    return 0;
}





