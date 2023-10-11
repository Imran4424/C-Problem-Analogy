/*
	12.5. Write a program that read a line of text and display it's length
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
	char str[25];

	cout << "enter the string" << endl;

	cin.getline(str, sizeof(str));

	int count = 0;
	for (int i = 0; str[i]; ++i) {
		count++;
	}

	cout << "String length - " << count << endl;
	
	return 0;
}