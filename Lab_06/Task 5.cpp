#include <stdio.h>
int main() {
	int n , i;
	unsigned long long fact2n = 1 , fact_n1=1, fact_n=1, catalan;
	printf("enter an integer: \n");
	scanf("%d", &n);
	
	for (i=1; i <= 2*n; i++){
		fact2n = fact2n *i;
	}
	for (i=1; i<=n +1 ;i++){
		fact_n1= fact_n1 *i;
	}
	for (i=1; i<=n; i++){
		fact_n = fact_n*i;
	}
	catalan = fact2n/ (fact_n1*fact_n);
	printf("the Catalan number for %d is = is %llu\n",n, catalan);
	return 0;
	
}
