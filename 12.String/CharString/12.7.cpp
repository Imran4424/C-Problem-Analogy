/*
	12.7. Write a program that read your name and display every 
	character with one space
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
	char str[25];

	cout << "enter the string" << endl;

	cin.getline(str, sizeof(str));

	
	for (int i = 0; str[i]; ++i) {
		cout << str[i] << " ";
	}

	cout << endl;
	
	return 0;
}