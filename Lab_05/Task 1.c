#include <stdio.h>
int main() {
	float prog , math, ai , attendance, average;
	printf("Enter programming marks: ");
	scanf("%f", &prog);
    printf("Enter Mathematics marks: ");
    scanf("%f", &math);
    printf("Enter AI marks: ");
    scanf("%f", &ai);
    printf("Enter Attendance percentage: ");
    scanf("%f", &attendance);

    if (prog >= 50 && math >= 50 && ai>= 50 && attendance >= 75) {
        
        average = (prog + math + ai) / 3.0;
        printf("\nStudent is Eligible.\n");
        printf("Average Marks: %.2f\n", average);

        if (average >= 80) {
            printf("Performance: Excellent\n");
        } else if (average >= 70) {
            printf("Performance: Very Good\n");
        } else if (average >= 60) {
            printf("Performance: Good\n");
        } else if (average >= 50) {
            printf("Performance: Satisfactory\n");
        } else {
            printf("Performance: Poor\n");
        }
        
    } else {
        printf("\nStudent is Not Eligible\n");
    }

    return 0;
	
	
	
	
}
