#include <stdio.h>
int main(){
	int present, absent=0, check,count=0;
	while (count<15){
		printf("Enter '1' if the student is present or '0' if the student is absent: \n");
		scanf("%d", &check);
		if (check == 1 ){
			present++;
		}else {
			absent++;
		}
		count++;	
	}
	printf("The total number of present are: %d", present);
	printf("\nThe total number of absent are: %d", absent);
	
	return 0;
}
