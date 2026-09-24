#include <stdio.h>

int main() {
    int category, subcategory;
    printf("Chatbot Categories:\n");
    printf("1. Greeting\n");
    printf("2. Study\n");
    printf("3. Weather\n");
    printf("4. Help\n");
    printf("Select a category (1-4): ");
    scanf("%d", &category);

    switch(category) {
        case 1:
            printf("\nGreeting Options:\n");
            printf("1. Hello\n2. How are you\n3. Goodbye\n");
            printf("Select an option (1-3): ");
            scanf("%d", &subcategory);
            
            switch(subcategory) {
                case 1: printf("Chatbot: Hello there! Nice to meet you.\n"); break;
                case 2: printf("Chatbot: I'm just a rule-based program, but I'm doing well!\n"); break;
                case 3: printf("Chatbot: Goodbye! Have a great day.\n"); break;
                default: printf("Chatbot: Invalid greeting option.\n");
            }
            break;
            
        case 2:
            printf("\nStudy Options:\n");
            printf("1. Programming\n2. Mathematics\n3. AI\n");
            printf("Select an option (1-3): ");
            scanf("%d", &subcategory);
            
            
            switch(subcategory) {
                case 1: printf("Chatbot: C is a powerful procedural language for system programming.\n"); break;
                case 2: printf("Chatbot: Mathematics is the foundation of computer science and logic.\n"); break;
                case 3: printf("Chatbot: AI involves creating systems capable of human-like reasoning.\n"); break;
                default: printf("Chatbot: Invalid study option.\n");
            }
            break;
            
        case 3:
            printf("\nWeather Options:\n");
            printf("1. Today\n2. Tomorrow\n3. Forecast\n");
            printf("Select an option (1-3): ");
            scanf("%d", &subcategory);
            
            switch(subcategory) {
                case 1: printf("Chatbot: Today's weather is sunny and clear in Karachi.\n"); break;
                case 2: printf("Chatbot: Tomorrow is expected to be warm with high humidity.\n"); break;
                case 3: printf("Chatbot: The forecast indicates mild temperatures throughout the week.\n"); break;
                default: printf("Chatbot: Invalid weather option.\n");
            }
            break;
            
        case 4: 
            printf("\nHelp Options:\n");
            printf("1. About Chatbot\n2. Commands\n3. Exit\n");
            printf("Select an option (1-3): ");
            scanf("%d", &subcategory);
            
            switch(subcategory) {
                case 1: printf("Chatbot: I am a simple rule-based AI written in C.\n"); break;
                case 2: printf("Chatbot: Navigate using the numerical keys (1-4) for categories and (1-3) for sub-options.\n"); break;
                case 3: printf("Chatbot: Exiting help menu...\n"); break;
                default: printf("Chatbot: Invalid help option.\n");
            }
            break;
            
        default: 
			printf("Chatbot: Invalid category selected. Please restart the program.\n");
    }

    return 0;
}
