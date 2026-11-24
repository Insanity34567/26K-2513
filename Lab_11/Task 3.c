#include <stdio.h>
#include <stdlib.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float unitPrice;
};

int main() {
    struct Item warehouse[5];
    float totalInventoryValue = 0.0;
    int i, searchID, FOUND = 0;

    for (i = 0; i < 5; i++) {
        printf("\nEnter details for Item %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &warehouse[i].id);
        printf("Name: ");
        scanf(" %[^\n]s", warehouse[i].name);
        printf("Quantity: ");
        scanf("%d", &warehouse[i].quantity);
        printf("Unit Price: ");
        scanf("%f", &warehouse[i].unitPrice);

        totalInventoryValue += warehouse[i].quantity * warehouse[i].unitPrice;
    }

    printf("\nTotal Warehouse Inventory Value: %.2f\n", totalInventoryValue);

    printf("\nItem ID to search:");
    scanf("%d", &searchID);

    for (i = 0; i < 5; i++) {
        if (warehouse[i].id == searchID) {
            printf("\nItem Found:\n");
            printf("ID: %d , Name: %s , Quantity: %d , Unit Price: %.2f\n",
                   warehouse[i].id, warehouse[i].name, 
                   warehouse[i].quantity, warehouse[i].unitPrice);
            FOUND = 1;
            break;
        }
    }
    if (!FOUND) {
        printf("Item with ID %d not found.\n", searchID);
    }





    return 0;
}





