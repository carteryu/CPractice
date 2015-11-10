/*
Prime generating integers:

Consider the divisors of 30: 1,2,3,5,6,10,15,30.
It can be seen that for every divisor d of 30, d+30/d is prime.

Find the sum of all positive integers n not exceeding 100 000 000
such that for every divisor d of n, d+n/d is prime.
*/

//The naive solution is very straightforward: iterate through each number
//and check if each divisor of the number is prime. If so, simply add it
//to the running sum.
//
//Below is my final and optimized approach using the Sieve of Eratosthenes
//Source: https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes

#include <stdio.h>

/*
This method checks if a given number is prime. Returns a zero if false.
*/
int isPrime(int n, int *primes){
  for (int i = 0; i < sqrt(n); i++){
    if(n%i == 0){
      if (primes[i+(n/i)] != 1) return 0;
    }   
  }
  return 1;
}

long main(){
  long lim = 100000
  int *primes = malloc(lim*sizeof(int));
  //populate the primes array with true, unless its 0 or 1
  for(int i = 2; i < lim; i++) {
    primes[i] = 1;
  }
  primes[0] = 0;
  primes[1] = 0
  for (int i = 2; i < lim; i++) {
    if(primes[i] == 1{
	int n = 2;
	while(n*i < lim){
	  primes[i*n++] = 0;
	}
    }
  }
  int candidate = 0;
  long sum = 0;
  for (int i = 0; candidate < limit; i ++){
    candidate = 4 * i + 2;
    if(primes[candidate + 1] == true){
	if (primes[candidate/2 + 2]) == true){
	  if (isPrime(candidate, primes)) sum+=candidate;
	} 
    }
  
  return sum;}
}

