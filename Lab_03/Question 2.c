#include <stdio.h>

int main() {
    int num1;
    int num2;
    
	printf("Enter num1: ");
	scanf("%d",&num1);
	getchar();
	printf("Enter num2: ");
	scanf("%d", &num2);
	getchar();
	printf("\n");
    printf("First num is:  %d\n", num1 );
	printf("Second num is:  %d", num2 );
	return 0;
}
