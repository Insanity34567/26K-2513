#include <stdio.h>
#include <stdlib.h>

int calculateChecksum(int transactionID) {
    if (transactionID < 10) {
        return transactionID;
    }
    
    int sum = 0;
    while (transactionID > 0) {
        sum += transactionID % 10;
        transactionID /= 10;
    }
    return calculateChecksum(sum);
}


int main() {
    int id;
    printf("Enter Transaction ID: ");
    scanf("%d", &id);
    
    printf("Digital Root Checksum: %d\n", calculateChecksum(id));
    
    
    
    return 0;
}



