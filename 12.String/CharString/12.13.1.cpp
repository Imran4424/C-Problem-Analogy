/*
	12.13. Write a program that read a line of text and displays 
	the frequency of every character
*/


// in this code we will only consider the lowercase letters

#include <iostream>
using namespace std;

void toLower(char* text) {
	for (int i = 0; text[i]; ++i) {
		if (text[i] >= 'A' && text[i] <= 'Z') {
			text[i] = text[i] + 32;
		}
	}
}

int main(int argc, char const *argv[])
{
	char text[100];
	int freq[26];

	// init frequency array
	for (int i = 0; i < 26; ++i) {
		freq[i] = 0;
	}

	// input the string
	cout << "enter the text" << endl;
	cin.getline(text, sizeof(text));

	toLower(text);

	// counting the frequency
	for (int i = 0; text[i]; ++i) {
		// only consider the letters
		if (text[i] >= 'a' && text[i] <= 'z') {
			int index = (int) text[i] - 'a';
			freq[index]++;
		}
	}

	cout << endl;

	// showing the frequency
	for (int i = 0; i < 26; ++i) {
		cout << "frequency of " << (char) (i + 'a') << " - " << freq[i] << endl;
	}

	return 0;
}