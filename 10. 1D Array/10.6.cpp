/*
	10.6. Write a program that inserts any number in an array
*/

#include <iostream>
#include <cstdio>
using namespace std;

void display(int *arr) {
	for (int i = 0; i < 5; ++i) {
		cout << arr[i] << " ";
	}

	cout << endl;
}

int main(int argc, char const *argv[])
{
	int arr[5] = {0};
	int input;
	int pos;

	int proma = 1;

	do {
		cout << "enter the number to insert in the array" << endl;
		cin >> input;

		cout << "enter the position (< 5)" << endl;
		cin >> pos;

		
		// shift to make space
		// insert - shifting the end
		for (int i = 4; i > pos; --i) {
			arr[i] = arr[i - 1];
		}

		// shifting to the start
		// for (int i = 0; i < pos; ++i) {
		// 	arr[i] = arr[i + 1];
		// }

		arr[pos] = input;

		display(arr);
	} while(proma);


	return 0;
}