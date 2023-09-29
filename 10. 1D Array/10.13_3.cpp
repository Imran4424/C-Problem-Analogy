/*
    10.13. Write a program that read an array and display median

*/


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n = 6;
	int arr[6] = {12, 5, 11, 7, 22, 13};

	// bubble sort
	// sorting the data
	// outer loop - number of iteration needed
	for (int i = 1; i <= n - 1; ++i) {
		// inner loop - will do the sorting for single data
		// n - 1 - i + 1
		for (int j = 0; j < n - i; ++j) {
			// ascending - small to big
			if(arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	cout << "Sorted list" << endl;
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	float median;

	if(n % 2 == 0)
	{
		// int / int  - will always be interger
		// float = int / int - this float will catch only integer part
		// float = (float)int / int - this float will catch a true float value
		median = ((float) arr[n / 2] + arr[(n / 2) - 1]) / 2 ;
	}
	else
	{
		// -1 cause index starts from 0
		median = arr[(n / 2 - 1) + 1];
	}

	cout << "Median is - " << median << endl;

	return 0;
}