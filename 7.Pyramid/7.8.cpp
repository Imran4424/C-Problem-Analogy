/*
	7.8.
		1
		0 1
		1 0 1
		0 1 0 1
		1 0 1 0 1

*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
	for (int i = 1; i <= 5; ++i) {
		for (int j = 1; j <= i; ++j) {
			if ((i + j) % 2 == 1) {
				printf("1 ");
			} else {
				printf("0 ");
			}
		}

		printf("\n");
	}

	return 0;
}