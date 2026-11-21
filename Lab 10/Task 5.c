#include <stdio.h>
#include <stdlib.h>

int main() {
    
    FILE *fptr = fopen("marks.txt", "r");
    if (fptr == NULL) {
        printf("Error: File Not Found!\n");
        exit(1);
    }
    int rollNo;
    char name[50];
    float marks;
    printf("%s %s %s\n", "Roll No", "Student Name", "Marks");
    while (fscanf(fptr, "%d %s %f", &rollNo, name, &marks) != EOF) {
        printf("%d %s %.2f\n", rollNo, name, marks);
    }
    fclose(fptr);
    
    
    
    return 0;
}



