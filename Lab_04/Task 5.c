#include <stdio.h>

int main() {
    int userRole, accountStatus, securityLevel;

    printf("Enter user role (1 = Admin, 2 = Researcher, 3 = Student): ");
    scanf("%d", &userRole);

    printf("Enter account status (1 = Active, 0 = Inactive): ");
    scanf("%d", &accountStatus);

    printf("Enter security level: ");
    scanf("%d", &securityLevel);

    if (accountStatus != 1) {
        printf("Access Denied\n");
    } else {
        if (userRole == 1 && securityLevel >= 3) {
            printf("Admin Access Granted\n");
        } else if (userRole == 2 && securityLevel >= 2) {
            printf("Researcher Access Granted\n");
        } else if (userRole == 3 && securityLevel >= 1) {
            printf("Student Access Granted\n");
        } else {
            printf("Access Denied\n");
        }
    }

    return 0;
}
