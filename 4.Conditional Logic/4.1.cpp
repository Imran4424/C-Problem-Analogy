/*
	Write a program that read an integer and prints odd or even
*/


#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int number;
	scanf("%d", &number);

	if (number % 2 == 0) {
		printf("even\n");
	} else {
		printf("odd\n");
	}

	return 0;
}