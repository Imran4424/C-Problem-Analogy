/*
	7.3.
		1
		0 0
		1 1 1
		0 0 0 0
		1 1 1 1 1
*/

#include <iostream>
#include <stdio.h>
using namespace std;


int main(int argc, char const *argv[])
{
	int currentVal = 1;

	for (int i = 1; i <= 5; ++i) {
		for (int j = 1; j <= i; ++j) {
			printf("%d ", currentVal);
		}
		printf("\n");

		// clearing
		currentVal = !currentVal;
	}

	return 0;
}

/*
	! - Not operator - negation

	False = !True
	True = !False

	0 - false
	1 - true

	Negation only works with boolean and 0 and 1
*/