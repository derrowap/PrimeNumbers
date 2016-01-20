#include <stdio.h>

int main() {
	int j, totalCount = 1, primes[100] = {2};
	char isPrime= 1;
	long i;
	for (i = 3; primes[100] == 0; i+=2) {
		for (j = 3; j * j <= i; j += 2) {
			if ((i % j) == 0) {
				isPrime = 0; 
				break;
			}
		}
		if (isPrime == 1) {
			primes[totalCount] = i;
			totalCount++;
		}
		else isPrime = 1;
	} 
	printf("total: %d\n", totalCount);
	for(i = 0; i < totalCount; i++) {
		printf("%d\t", primes[i]);
		if(i % 10 == 0) printf("\n");
	}

	return 0;
}