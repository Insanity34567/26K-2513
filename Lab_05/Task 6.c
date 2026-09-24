#include <stdio.h>

int main() {
    int problem, algorithm;

    printf("Machine Learning Problem Types:\n");
    printf("1. Classification\n");
    printf("2. Regression\n");
    printf("3. Clustering\n");
    printf("4. Computer Vision\n");
    printf("Select a problem type (1-4): ");
    scanf("%d", &problem);

    switch(problem) {
        case 1: 
            printf("\nClassification Algorithms:\n");
            printf("1. Logistic Regression\n");
            printf("2. Decision Tree\n");
            printf("3. KNN\n");
            printf("Select an algorithm (1-3): ");
            scanf("%d", &algorithm);
            
            switch(algorithm) {
                case 1: printf("Selected Model: Logistic Regression\n"); break;
                case 2: printf("Selected Model: Decision Tree\n"); break;
                case 3: printf("Selected Model: KNN\n"); break;
                default: printf("Invalid algorithm selection.\n");
            }
            break;
            
        case 2:
            printf("\nRegression Algorithms:\n");
            printf("1. Linear Regression\n");
            printf("2. Polynomial Regression\n");
            printf("3. SVR\n");
            printf("Select an algorithm (1-3): ");
            scanf("%d", &algorithm);
            
            switch(algorithm) {
                case 1: printf("Selected Model: Linear Regression\n"); break;
                case 2: printf("Selected Model: Polynomial Regression\n"); break;
                case 3: printf("Selected Model: SVR\n"); break;
                default: printf("Invalid algorithm selection.\n");
            }
            break;
            
        case 3:
            printf("\nClustering Algorithms:\n");
            printf("1. K-Means\n");
            printf("2. Hierarchical Clustering\n");
            printf("3. DBSCAN\n");
            printf("Select an algorithm (1-3): ");
            scanf("%d", &algorithm);
            
            switch(algorithm) {
                case 1: printf("Selected Model: K-Means\n"); break;
                case 2: printf("Selected Model: Hierarchical Clustering\n"); break;
                case 3: printf("Selected Model: DBSCAN\n"); break;
                default: printf("Invalid algorithm selection.\n");
            }
            break;
            
        case 4:
            printf("\nComputer Vision Algorithms:\n");
            printf("1. CNN\n");
            printf("2. YOLO\n");
            printf("3. R-CNN\n");
            printf("Select an algorithm (1-3): ");
            scanf("%d", &algorithm);
            
            switch(algorithm) {
                case 1: printf("Selected Model: CNN\n"); break;
                case 2: printf("Selected Model: YOLO\n"); break;
                case 3: printf("Selected Model: R-CNN\n"); break;
                default: printf("Invalid algorithm selection.\n");
            }
            break;
            
        default:
	 	   printf("\nInvalid problem type selected. Please restart the program.\n");
    }

    return 0;
}
