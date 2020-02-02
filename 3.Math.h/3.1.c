/*
	3.1. Write a program that read any integer number and display absolute value
*/

#include <stdio.h>
#include <math.h> // for abs function

int main(int argc, char const *argv[])
{
	int num;

	scanf("%d", &num);

	printf("The absolute value is: %d\n", abs(num));

	return 0;
}