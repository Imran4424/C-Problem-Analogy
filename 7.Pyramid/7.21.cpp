/*
	7.21.

				1
			      1 2
			    1 2 3
			  1 2 3 4
			1 2 3 4 5
*/


#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
	for (int i = 1; i <= 5; ++i) {
		// for space
		for (int k = 1; k <= 5 - i; ++k) {
			printf("  ");
		}

		for (int j = 1; j <= i; ++j) {
			printf("%d ", j);
		}

		printf("\n");
	}

	return 0;
}