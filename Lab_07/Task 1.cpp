#include <stdio.h>
#include <string.h>
int main (){
	int sum=0;
	int average=0;
	char student_names[3][50];
	int marks[3][3];
	int i=0;
	for (i; i<3; i++){
		printf("Please enter student name:- \n");
		scanf(" %[^\n]", student_names[i]);
		
		
	printf("\nPlease enter marks for 3 subjects:- \n");
	for(int j =0; j<3; j++){
		printf("Subject %d : \n", j+1);
		scanf("%d", &marks[i][j]);
	}
	}
	printf("=====RESULTS====\n");
	for (i=0; i<3; i++){
		for (int j=0; j<3; j++){
			sum+= marks[i][j];
		}
	average= sum/3;
	printf("Student: %s\nAverage Marks: %d\n", student_names[i], average);
	}
	
	
	
	
	
	
	return 0;
}
