# PrimeNumbers
Find prime numbers in two different ways:
<br>Brute force, which is horribly inefficient. 
<br>Sieve of Eratosthenes which is much more efficent.
<br>
<br><h3>An implementation of the Sieve of Eratosthenes is quite interesting.</h3>
<br>You basically create a large boolean array of size n initialized to true, 
<br>where n is the largest number you want to check if prime.
<br>With this array, you first assume that 2 and 3 are prime.
<br>You start with your first prime number (2) and iterate through the array by multiples of 2, setting each value to false.
<br>All values that are multiples of 2 are not prime. Then you move on to the next prime number in the array.
<br>In this point in time, we would use 3. Then through iteration, we set all multiples of 3 equal to false.
<br>For each next prime number you find, you can start iterating through the array at that prime number squared.
<br>This is because all numbers below the prime number squared are gauranteed to already by detected as prime or not prime.
<br>When the algorithm is finished, you are left with an array with true in the index of a prime number and false every where else.
