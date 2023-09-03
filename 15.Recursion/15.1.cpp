/*
	15.1. Write a recursive function that gets any positive 
	      integer and returns it's factorial
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int add(int a, int b) {
	return a + b;
}

int factorial(int n) {
	if (1 == n) {
		return 1;
	}

	return n * factorial(n - 1);
}

int main(int argc, char const *argv[])
{
	int num;
	printf("Enter the value of n: ");
	scanf("%d", &num);

	sum = factorial(num);

	printf("factorial of %d is %d\n", num, sum);

	return 0;
}