/*
	4.1. Write a program that read an integer and prints odd or even
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num;

	scanf("%d", &num);

	// this is the very common style of writing if-else condtion of software industry
	if(num % 2 == 0) {
		printf("Even\n");
	} else {
		printf("Odd\n");
	}

	return 0;
}

/*
	this is the very common style of writing if-else condtion of software industry
	so please follow this

	if() {
	
	} else {
	
	}


	if() {
	
	} else if () {
	
	} else if () {
	
	} else { 

	}
*/