#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool vowelCheck(char ch) {
	ch = tolower(ch);
	return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ;
}
int main() {
	string sentence;
	int wordCount = 0, specialCharCount = 0, vowelCount = 0;
	cout << "Enter your sentence here : ";
	getline(cin, sentence);

	bool inWord = false;

	for (char ch : sentence) {
		if (isalpha(ch)) {
			if (vowelCheck(ch)) vowelCount++;
			if (!inWord) {
				wordCount++;
				inWord = true;
			}
		}
		else {
			inWord = false;
			if (!isalnum(ch) && !isspace(ch)) specialCharCount++;
		}
	}
	cout << "Given Sentence : \"" << sentence << "\"" << endl;
	cout << "Special Characters : " << specialCharCount << endl;
	cout << "Words : " << wordCount << endl;
	cout << "Vowels : " << vowelCount << endl;

	return 0;
}