#include <stdio.h>
int main() {
	char name[100];
	int quan;
	float price;
	printf("Enter the name: ");
	scanf("%[^\n]", &name);
	printf("Enter the quantity: ");
	scanf("%d", &quan);
	getchar();
	printf("Enter the price: ");
	scanf("%f", &price);
	
	printf("\nProduct Name: %s\n", &name);
	printf("Quantity: %d\n", quan);
	printf("Price: %.2f", price);
	
	return 0;
}
