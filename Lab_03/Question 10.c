#include <stdio.h>
int main() {
	char name[100];
	int age;
	int height;
	char grade[2];
	float cgpa;
	
	printf("Enter the name: ");
	scanf("%[^\n]", &name);
	printf("Enter Age: ");
	scanf("%d", &age);
	getchar();
	printf("Enter Height: ");
	scanf("%d", &height);
	getchar();
	printf("Enter your grade: ");
	scanf("%s", &grade );
	printf("Enter your CGPA: ");
	scanf("%f", &cgpa);
	
	printf("\n===== STUDENT REPORT======\n");
	printf("\n\n\n\nName   : %s", &name);
	printf("\n\nAge   : %d",age);
	printf("\n\nHeight   : %d cm",height);
	printf("\n\nGrade   : %s", &grade);
	printf("\n\nCGPA   : %.2f",cgpa);
	
	return 0;
	
}

