#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct HospitalRecord {
    int recordID;
    char ward[30];
    
    struct PatientInfo {
        int patientID;
        char patientName[50];
        int age;
    } patient;
};



int main() {
    struct HospitalRecord rec = {5001, "Emergency ICU", {901, "Ali Raza", 34}};
    struct HospitalRecord *ptr = &rec;

    printf("\nHospital Admission Record\n\n");
    printf("Record ID: %d\n", ptr->recordID);
    printf("Ward: %s\n", ptr->ward);
    printf("Patient ID: %d\n", ptr->patient.patientID);
    printf("Patient Name: %s\n", ptr->patient.patientName);
    printf("Patient Age: %d\n", ptr->patient.age);



    return 0;
}


