/*
	Write a program that searches any number from an array
*/


#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[5] = { 2, 3, 4, 6, 9};

	int target;
	bool found = false;

	cout << "enter a number to find" << endl;
	cin >> target;

	for (int i = 0; i < 5; ++i) {
		if (target == arr[i]) {
			found = true;
			break;
		}
	}

	if (found) {
		cout << "Found" << endl;
	} else {
		cout << "Not found" << endl;
	}

	return 0;
}

/*
	this is called linear search

	complexity - O(n)
*/