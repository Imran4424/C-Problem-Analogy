/*
	8.4. Write a program that read a positive integer and display its factorial
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int num, sum = 1;
	printf("Enter the value of n: ");
	scanf("%d", &num);

	for (int i = num; i >= 1; --i) {
		sum = sum * i;
	}

	printf("factorial of %d is %d\n", num, sum);

	return 0;
}