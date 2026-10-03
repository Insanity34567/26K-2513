#include <stdio.h>
int main () {
	int arr[8];
	int size = 8;
	int i, value, max =0 , min= 1000000, flag=0, index, temp;
	for (i=0; i <size; i++){
		printf("Please enter a value: \n");
		scanf("%d", &arr[i]);
	}
	for (i=0; i <size; i++){
		printf("\n%d \n", arr[i]);
		if (arr[i]>max){
			max = arr[i];
		}else{
			if (arr[i]<min){
				min = arr[i];
			}
		}
	}
	printf(" \nMax= %d\n", max);
	printf("Min= %d\n", min);
	
	printf("\n\n\nPlease enter the number you want to search: \n");
	scanf("%d", &value);
	i=0;
	while (flag==0){
	
		if (arr[i]== value){
			flag=1;
			printf("The number is found at index %d\n", i);
			break;
		}else{
			i++;
		}
	}
	printf("\n\n\nPlease enter the number you want to insert: ");
	scanf("%d",&value);
	printf("Please enter the insert the index you want to insert at: ");
	scanf("%d",&index);
	for (i=size; i> index;i--){
		arr[i]=arr[i-1];
	}arr[index]= value;
	size++;
	
	for (i=0; i <size; i++){
		printf("%d \n", arr[i]);
	}
	
	printf("\n\n\n\nPlease enter the insert the index you want to delete at: ");
	scanf("%d",&index);
		
	for (i=index; i<size-1;i++){
		arr[i]=arr[i+1];
	}
	size--;
	for (i=0; i <size; i++){
		printf("%d \n", arr[i]);
	}
	
	return 0;
}
