#include <stdio.h>
#include <stdlib.h>

struct Product {
    int id;
    char name[50];
    char category[30];
    float price;
    int stockQuantity;
};

void displayProductDetails(struct Product p) {
    float discountedPrice = p.price - (p.price * 0.05);
    
    printf("\nProduct Details:-\n");
    printf("ID: %d\n", p.id);
    printf("Name: %s\n", p.name);
    printf("Category: %s\n", p.category);
    printf("Original Price: %.2f\n", p.price);
    printf("Price after 5%% Discount: %.2f\n", discountedPrice);
    printf("Available Stock: %d\n", p.stockQuantity);
}

int main() {
    struct Product prod1 = {101, "Wireless Mouse", "Electronics", 2500.00, 45};
    struct Product prod2 = {102, "Mechanical Keyboard", "Electronics", 8000.00, 20};
    
    displayProductDetails(prod1);
    displayProductDetails(prod2);
    
    
    
    
    return 0;
}


