#include <stdio.h>
#include <string.h>

int main() {
    char name[10][100];
    char temp[100];
    int i;
    for (i=0; i<10; i++){
        printf("Enter name %d: ", i+1);
        fgets(name[i], sizeof(name[i]), stdin);

        size_t len = strlen(name[i]);
        if (len > 0 && name[i][len - 1] == '\n') {
            name[i][len - 1] = '\0';
        }
    }
    int j;
    for (i=0; i<9; i++){
        for (j=0;j<9-i;j++){
            if (strcmp(name[j], name[j+1])>0){
                strcpy(temp, name[j]);
                strcpy(name[j], name[j+1]);
                strcpy(name[j+1], temp);
            }
        }
    }
    printf("\nSorted names:\n");
    for (i=0; i<10; i++){
        printf("%s\n", name[i]);
    }

    return 0;
}


