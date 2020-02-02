/*
	8.1. Write down a program that can take a lower bound i and an upper bound n and then 
	find out the summation of those numbers which are even from i to n.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, n, sum = 0;

	scanf("%d %d", &i, &n);

	for(int traveler = i; traveler <= n; traveler++) {
		sum += traveler;
	}

	printf("%d\n", sum);

	return 0;
}