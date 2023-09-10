/*
    10.15. Write a program that display first n prime numbers using array
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	cout << "enter the number: ";
	int n;
	cin >> n;
	int arr[n];
	int index = 0;
	int i, j;

	for (i = 2; index < n; ++i) {
		for (j = 2; j < i; ++j) {
			if (i % j == 0) {
				break;
			}
		}

		if (i == j) {
			arr[index] = i;
			index++;
		}
	}

	for (i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}

	return 0;
}