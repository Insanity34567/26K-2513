#include <stdio.h>
int main(){
	int num,temp, sum =0, temp1 ;
	printf("Please enter a 4-Digit: ");
	scanf("%d", &num);
	temp= num;
	while (temp>0) {
		temp1 = num % 10;
		sum+= temp1;
		temp = temp / 10;
	}
	if (sum>10) {
		printf("It is a strong pin...");
	}	else {
		printf("Weak sniveling pin..");
	}	
	
	
	
	return 0; 
}
