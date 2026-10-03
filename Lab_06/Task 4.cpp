#include <stdio.h>
int main(){
	int reverse=0, code, i =0,temp,temp1;
	printf("Please enter the code: \n");
	scanf("%d", &code);
	temp= code;
	while (temp != 0){
		temp1= temp%10;
		reverse= temp1 + reverse*10;
		temp= temp/10;
}
	if (reverse == code){
		printf("It is a palindrome ");
}	else {
	printf("It is not a palindrome ");
}
}
	
