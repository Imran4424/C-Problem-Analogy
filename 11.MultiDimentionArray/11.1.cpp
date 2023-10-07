/*
	Write a program that read and display read and display a 2D array
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int m1[10][10], r, c;

	printf("row: ");
	scanf("%d", &r);

	printf("col: ");
	scanf("%d", &c);

	printf("Input matrix\n");
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			scanf("%d", &m1[i][j]);
		}
	}


	printf("display matrix\n\n");
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			printf("%d ", m1[i][j]);
		}
		printf("\n");
	}

	return 0;
}