/*
	10.1. Write a program that read and display an array
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int arSize;
	scanf("%d", &arSize);

	int arr[arSize];

	for(int i = 0; i < arSize; i++) {
		scanf("%d", &arr[i]);
	}

	for(int i = 0; i < arSize; i++) {
		printf("%d ", arr[i]);	
	}

	printf("\n");

	return 0;
}