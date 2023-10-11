/*
	Write a program that converts a line to uppercase.
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
	char str[25];

	cout << "enter the string" << endl;

	cin.getline(str, sizeof(str));

	// for (int i = 0; str[i] != '\0'; ++i) {
	// 	if (str[i] >= 'a' && str[i] <= 'z') {
	// 		str[i] = str[i] - 32;
	// 	}
	// }

	for (int i = 0; str[i]; ++i) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] - 32;
		}
	}

	cout << "Upper case - " << str << endl;

	return 0;
}