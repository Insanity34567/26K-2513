#include <stdio.h>
int main() {
	int score;
	printf("please enter a confidence score: ");
	scanf("%d", &score);
	
	if (score<0 || score>100) {
		printf("Invalid Score");
}	else if (score<50 && score>=0){
	printf("Low Confidence");
}	else if (score>49 && score<80) {
	printf("Moderate Confidence");
}	else if (score>79 && score<101) {
	printf("High Confidence");
}
	
}
