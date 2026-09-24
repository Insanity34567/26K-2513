#include <stdio.h>
#include <math.h>

int main() {
    float accuracy, confidence, model_score;
    int size, user, model_status, permissions;

    printf("Enter Model Accuracy (%%): ");
    scanf("%f", &accuracy);
    printf("Enter Confidence Score (%%): ");
    scanf("%f", &confidence);
    printf("Enter Dataset Size: ");
    scanf("%d", &size);
    
    printf("User Roles: 1 = Admin, 2 = Developer, 3 = Researcher\n");
    printf("Enter User Role: ");
    scanf("%d", &user);
    
    printf("Model Status: 1 = Ready, 2 = Testing, 3 = Training\n");
    printf("Enter Model Status: ");
    scanf("%d", &model_status);
    
    printf("Permissions: View=1, Train=2, Test=4, Deploy=8 (Sum for multiple)\n");
    printf("Enter Permission Value (0-15): ");
    scanf("%d", &permissions);

    printf("\n========================================\n");
    printf("       AI DECISION ENGINE REPORT        \n");
    printf("========================================\n");

    model_score = round((accuracy + confidence) / 2.0);
    printf("Calculated Model Score: %.0f\n", model_score);

    printf("System Info: Evaluated %zu bytes of scoring data.\n", sizeof(model_score));

    printf("Session Context: ");
    switch(user) {
        case 1:
            printf("Admin accessing a ");
            switch(model_status) {
                case 1: printf("Ready model.\n"); break;
                case 2: printf("Testing model.\n"); break;
                case 3: printf("Training model.\n"); break;
                default: printf("model with Unknown status.\n");
            }
            break;
        case 2:
            printf("Developer accessing a ");
            switch(model_status) {
                case 1: printf("Ready model.\n"); break;
                case 2: printf("Testing model.\n"); break;
                case 3: printf("Training model.\n"); break;
                default: printf("model with Unknown status.\n");
            }
            break;
        case 3:
            printf("Researcher accessing a ");
            switch(model_status) {
                case 1: printf("Ready model.\n"); break;
                case 2: printf("Testing model.\n"); break;
                case 3: printf("Training model.\n"); break;
                default: printf("model with Unknown status.\n");
            }
            break;
        default:
            printf("Unknown user role accessing the system.\n");
    }

    printf("Evaluation Details: ");
    if (accuracy >= 80.0 && confidence >= 75.0 && size >= 1000) {
        
        if (model_status == 1 && (permissions & 8)) {
            printf("All thresholds met. User authorized for deployment.\n");
        } else {
            printf("Metrics passed, but model is not marked 'Ready' or user lacks Deployment permission (Bit 8).\n");
        }
    } else {
        printf("Failed baseline metrics (Accuracy < 80, Confidence < 75, or Dataset < 1000).\n");
    }

    int is_deployable = (accuracy >= 80.0 && confidence >= 75.0 && size >= 1000 && model_status == 1 && (permissions & 8));
    
    printf("\nFINAL DEPLOYMENT STATUS: %s\n", is_deployable ? "APPROVED" : "DENIED");
    printf("========================================\n");

    return 0;
}
