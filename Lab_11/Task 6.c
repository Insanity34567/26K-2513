#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TOLL_RATE 50

void processVehicle(char vehicleType[]) {
    static int totalVehicles = 0;
    static int totalRevenue = 0;

    totalVehicles++;
    totalRevenue += TOLL_RATE;

    printf("Processed: %-10s , Vehicles Today: %d , Total Revenue: %d \n", 
           vehicleType, totalVehicles, totalRevenue);
}

int main() {
    printf("\nHighway Toll Plaza Collection Report:-\n");
    processVehicle("Car");
    processVehicle("Truck");
    processVehicle("Motorbike");
    processVehicle("Bus");
    processVehicle("Van");




    return 0;
}


