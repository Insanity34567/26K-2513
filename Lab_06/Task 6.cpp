#include <stdio.h>
int main() {
	int even=0, odd=0,temp1, temp,num=0;
	
	printf("please enter the number");
	scanf("%d", &num);
	temp=num;
	while (temp>0){
		temp1= temp % 10;
		if (temp1%2 ==0){
			even++;
		}else{
			odd++;
		}
		temp= temp/10;
	}
		
	printf("Odd: %d",odd);
	printf("\nEven: %d\n",even);
	
	
}
