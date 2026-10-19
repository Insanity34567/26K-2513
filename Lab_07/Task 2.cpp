#include <stdio.h>
#include <string.h>
int main(){
    char logs[3][30]; 
    int uppercase_count = 0;
	for (int i = 0; i < 3; i++){
        printf("Enter CSV log entry %d: ", i + 1);
        scanf(" %[^,],%[^,],%[^\n]", logs[0], logs[1], logs[2]);
		for (int j = 0; j < 3; j++) { 
            for (int k = 0; logs[j][k] != '\0'; k++) { 
               if (logs[j][k] >= 'A' && logs[j][k] <= 'Z') {
                    uppercase_count++;
                }
            }
        }
    }
	printf("Total uppercase letters across the log matrix: %d\n", uppercase_count);
	return 0;
}
