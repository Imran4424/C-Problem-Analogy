/*
	12.2. Write a program that displays a string (a line)
*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string text;

	getline(cin, text);

	cout << text << endl;

	return 0;
}