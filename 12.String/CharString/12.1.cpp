/*
	12.1. Write a program that displays a string (single word)
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
	char word[25];

	// scanf("%s", word);
	cin >> word;

	printf("%s\n", word);

	return 0;
}

/*
	string does not require & operator

	because, string is array of characters

	and 

	word represents first addrress of array

	word -> *word[0] -> &word[0]

	so, we can write

	&word or word 

	doest matter

*/