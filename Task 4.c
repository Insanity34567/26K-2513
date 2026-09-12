#include <stdio.h>
int main(){
		double accuracy, latency ;
		int status;
		printf("Enter model accuracy (%%): ");
		scanf("%lf", &accuuracy);
		
		printf("Enter prediction latency (ms): ");
		scanf("%lf", &latency);
		
		printf("Enter model approval status (1 = Approved, 0 = Not Approved): ");
		scanf("%d", &status);
		
		if (accuracy < 90.0) {
			printf("Accuracy too low.\n");
		}
		if (latency >100.0){
			printf("Latency too high.\n")
		}
		if (status != 1 ){
			printf("Model not approved.\n");
		}
		
	return 0
				
}
