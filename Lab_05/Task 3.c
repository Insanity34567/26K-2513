#include <stdio.h>

int main() {
    int category, subcategory;

    printf("Select a Category:\n");
    printf("1. Animal\n");
    printf("2. Vehicle\n");
    printf("3. Food\n");
    printf("4. Human\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &category);

    switch(category) {
        case 1: 
            printf("\nSelect an Animal:\n");
            printf("1. Cat\n2. Dog\n3. Bird\n");
            printf("Enter your choice (1-3): ");
            scanf("%d", &subcategory);
            
            switch(subcategory) {
                case 1: printf("Classification: Animal - Cat\n"); break;
                case 2: printf("Classification: Animal - Dog\n"); break;
                case 3: printf("Classification: Animal - Bird\n"); break;
                default: printf("Invalid animal choice.\n");
            }
            break;
            
        case 2: 
            printf("\nSelect a Vehicle:\n");
            printf("1. Car\n2. Bus\n3. Bike\n");
            printf("Enter your choice (1-3): ");
            scanf("%d", &subcategory);
            
            switch(subcategory) {
                case 1: printf("Classification: Vehicle - Car\n"); break;
                case 2: printf("Classification: Vehicle - Bus\n"); break;
                case 3: printf("Classification: Vehicle - Bike\n"); break;
                default: printf("Invalid vehicle choice.\n");
            }
            break;
            
        case 3: 
			printf("\nSelect a Food:\n");
            printf("1. Pizza\n2. Burger\n3. Biryani\n");
            printf("Enter your choice (1-3): ");
            scanf("%d", &subcategory);
            
            switch(subcategory) {
                case 1: printf("Classification: Food - Pizza\n"); break;
                case 2: printf("Classification: Food - Burger\n"); break;
                case 3: printf("Classification: Food - Biryani\n"); break;
                default: printf("Invalid food choice.\n");
            }
            break;
            
        case 4:
            printf("\nSelect a Human demographic:\n");
            printf("1. Male\n2. Female\n3. Child\n");
            printf("Enter your choice (1-3): ");
            scanf("%d", &subcategory);
            
            switch(subcategory) {
                case 1: printf("Classification: Human - Male\n"); break;
                case 2: printf("Classification: Human - Female\n"); break;
                case 3: printf("Classification: Human - Child\n"); break;
                default: printf("Invalid human choice.\n");
            }
            break;
            
        default:
			printf("Invalid category choice. Please run the program again.\n");
    }

    return 0;
}
