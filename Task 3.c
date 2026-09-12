#include <stdio.h>
int main() {
	int total;
	int missing;
	int duplicate;
	printf("Please enter the total number of records: ");
	scanf("%d", &total);
	getchar();
	printf("Please enter the number of missing records: ");
	scanf("%d", &missing);
	printf("Please enter the number of duplicate records: ");
	scanf("%d", &duplicate);
	
	if (total<=0) {
		printf("Invalid Dataset");
}	else {
	double missingpercentage = ((double)missing / total) * 100;
	double duplicatepercentage = ((double)duplicate / total) * 100;
	
	if (missingpercentage > 30.0){
		printf("Poor Quality Dataset\n");
		
	}else if (duplicatepercentage > 20.0){
		printf("Dataset requires Cleaning\n");
	}else {
		printf("Dataset ready for training\n ");
	}

}



}
