/*
	7.6.
		1
		2 3
		3 4 5
		4 5 6 7
		5 6 7 8 9
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int colNum;

	for (int i = 1; i <= 5; ++i) {
		colNum = i;
		for (int j = 1; j <= i; ++j) {
			printf("%d ", colNum);
			colNum++;
		}
		printf("\n");
	}

	return 0;
}