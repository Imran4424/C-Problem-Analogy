/*
	6.1. Write a program to calculate the series: 1 + 2 + 3 + 4 + ... + n
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, sum = 0;

	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {
		sum = sum + i;
	}

	printf("Summation of the series is: %d\n", sum);

	return 0;
}