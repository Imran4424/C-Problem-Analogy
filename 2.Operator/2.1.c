/*
	2.1. Write a program that read two integer and display sum
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x, y;

	scanf("%d %d", &x, &y);

	int sum = x + y;

	printf("The sum is: %d\n", sum);

	return 0;
}