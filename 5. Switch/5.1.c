/*
	5.1. Write a program that read a digit and diplay by spelling
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number;

	scanf("%d", &num);

	switch(number) {
		case 0:
			printf("Zero\n");
			break; // break is important
		case 1:
			printf("One\n");
			break;
		case 2:
			printf("Two\n");
			break;
		case 3:
			printf("Three\n");
			break;
		case 4:
			printf("Four\n");
			break;

		case 5:
			printf("Five\n");
			break;
	}	

	return 0;
}