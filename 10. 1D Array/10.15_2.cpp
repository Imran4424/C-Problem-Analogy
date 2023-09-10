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
	bool status;

	for (int i = 2; index < n; ++i) {
		status = true;
		for (int j = 2; j <= i * i; ++j) {
			if (i % j == 0) {
				status = false;
				break;
			}
		}

		if (status) {
			arr[index] = i;
			index++;
		}
	}

	for (int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}

	return 0;
}

/*
	optimize prime code
*/