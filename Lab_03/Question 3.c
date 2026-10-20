#include <stdio.h>

int main() {
    int age;
    int height;
	char grade[2];
    
	printf("Enter your age: ");
	scanf("%d",&age);
	getchar();
	printf("Enter your height in centimeters: ");
	scanf("%d", &height);
	getchar();
	
	printf("\n");
    printf("The age is: %d\n", age );
	printf("The height is: %d", height );
	return 0;
}
