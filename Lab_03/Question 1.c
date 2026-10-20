#include <stdio.h>

int main() {
    char name[50];
    int age;
    char city[100];
    
	printf("What's your name? ");
	fgets(name, sizeof(name),stdin);
	printf("What is your age? ");
	scanf("%d", &age);
	
	getchar();
	printf("In which city do you live? ");
    
    
	fgets(city, sizeof(city),stdin);
	
    printf("Name:  %s", name );
	printf("Age:  %d\n", age );
	printf("City: %s", city );
	return 0;
}

