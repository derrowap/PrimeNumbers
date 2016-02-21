#include <stdio.h>
#include <stdbool.h>

#define PRIME_COUNT 500

bool prime(int p) {
	int i;
	for(i = 2; i < p; i++) {
		if(p % i == 0) return false;
	}
	return true;
}

void bruteForcePrimes() {
	int totalCount = 2, primes[PRIME_COUNT] = {2, 3};
	long i;
	for (i = 4; primes[PRIME_COUNT - 1] == 0; i += 1) {
		if(prime(i)) {
			primes[totalCount] = i;
			totalCount++;
		}
	} 
	printf("total primes found: %d\n", totalCount);
	for(i = 0; i < totalCount; i++) {
		if(i % 10 == 0 && i != 0) printf("\n");
		printf("%d\t", primes[i]);
	}
}

int main() {
	bruteForcePrimes();
	return 0;
}