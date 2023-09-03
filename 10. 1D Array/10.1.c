/*
	10.1. Write a program that read and display an array
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("Enter the size of the array\n");
	int arSize;
	scanf("%d", &arSize);

	int arr[arSize];

	printf("enter %d int number\n", arSize);
	for(int i = 0; i < arSize; i++) {
		scanf("%d", &arr[i]);
	}

	printf("The array contains\n");
	for(int i = 0; i < arSize; i++) {
		printf("%d ", arr[i]);	
	}

	printf("\n");

	return 0;
}