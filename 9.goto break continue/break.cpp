#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	for (int i = 1; i <= 10; i++) {
		if (i == 6) {
			continue; // skip
		}

		if (i == 9) {
			break; // stop
		}

		// printf("%d\n", i);
	}

	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= 3; j++) {
			if (i < j) {
				break;
			}

			printf("%d ", j);
		}

		printf("\n");
	}


	return 0;
}