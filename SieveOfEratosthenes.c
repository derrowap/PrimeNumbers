#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void sieveOfEratosthenes(int max) {
	bool *primes = calloc(max, sizeof(bool));
	int i, j;
	for(i = 2; i < sqrt(max); i++) {
		if(!primes[i]) {
			for(j = i*i; j < max; j+=i) {
				primes[j] = true;
			}
		}
	}
	printf("Primes numbers from 2 to %d:\n", max);
	j = 0;
	for(i = 2; i < max; i++) {
		if(!primes[i]) {
			if(j % 5 == 0)
				printf("\n");
			printf("%d\t",i);
			j++;
		}
	}
	printf("\nTotal number of prime numbers: %d\n", j);

}

int main() {
	/* this prints first one million prime numbers */
	int primesRange = 15485864;
	sieveOfEratosthenes(primesRange);

	/* this prints first two million prime numbers */
	// int primesRange = 32452844;
	// sieveOfEratosthenes(primesRange);

	/* this prints first three million prime numbers */
	// int primesRange = 49979688;
	// sieveOfEratosthenes(primesRange);

	/* this prints the first four million prime numbers */
	// int primesRange = 67867968;
	// sieveOfEratosthenes(primesRange);

	/* this prints the first five million prime numbers */
	// int primesRange = 86028122;
	// sieveOfEratosthenes(primesRange);

	/* this prints the first ten million prime numbers */
	// int primesRange = 179424674;
	// sieveOfEratosthenes(primesRange);

	/* this prints the first 50 million prime numbers */
	// int primesRange = 982451654;
	// sieveOfEratosthenes(primesRange);

	return 0;
}