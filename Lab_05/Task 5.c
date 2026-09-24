#include <stdio.h>

int main() {
    int confidence, user;

    printf("Enter recognition confidence (0-100): ");
    scanf("%d", &confidence);
    printf("Enter user type (1 for Authorized, 0 for Unauthorized): ");
    scanf("%d", &user);

    if (confidence < 50 || user == 0) {
        
        printf("\nSystem Decision: Access Denied\n");
        printf("Reason: %s\n", (confidence < 50) ? "Confidence is below 50%" : "User Type is Unauthorized");
        
    } else {
        if (confidence >= 80) {
            printf("\nStatus: Face Recognized (Confidence >= 80%%)\n");
            
            int isAuthorized = (confidence >= 80 && user== 1);
            printf("Final Access: %s\n", isAuthorized ? "Access Granted" : "Access Denied");
            
        } else {
            printf("\nStatus: Manual Verification Required (Confidence 50-79%%)\n");
            printf("Final Access: Pending Review\n");
        }
    }

    return 0;
}
