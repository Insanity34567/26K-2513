#include <stdio.h>
int main(){
	int reverse=0,i, num, temp1 = 0,temp;
	printf("Please enter cinema ticket number");
	scanf("%d", &num);
	temp = num;
	for (i = 0; temp !=0 ; i++){
	
		temp1= temp % 10;
		reverse= temp1 + reverse*10;
		temp= temp/10;
}
	printf("%d", reverse);
	
}
