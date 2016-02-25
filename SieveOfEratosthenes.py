"""
Author: Austin Derrow-Pinion
Purpose: Implement the Sieve of Eratosthenes
Language: Python

Calculates all prime numbers in O(n)
"""
import math

def main():
	sieve(1000)

def sieve(max):
	""" Implementation of the Sieve of Eratosthenes """
	primes = [False]*max
	for i in range(2, int(math.sqrt(len(primes)))):
		if primes[i] == False:
			for j in range(i*i, max, i):
				primes[j] = True
	count = 0
	print("Prime numbers under ", max, ":", sep='')
	for j in range(2, max):
		if primes[j] == False:
			count += 1
			if count % 20 == 0:
				print(j)
			else:
				print(j, end='\t')
	print()

	
				
if __name__ == '__main__':
	main()