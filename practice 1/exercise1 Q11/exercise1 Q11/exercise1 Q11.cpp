#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool nameType(const string& name) {
	for (char ch : name) {
		if (!isalpha(ch)) return false;
	}
	return true;
}

int main()
{
	string first, last;

	cout << "Enter the first name : " << endl;
	cin >> first;
	cout << "Enter the last name :" << endl;
	cin >> last;

	if (first == last) {
		cout << "Please provide different surname" << endl;
	}
	else if (!nameType(first) || !nameType(last)) {
		cout << "\"Please provide only letters\"" << endl;
	}
	else {
		cout << "\"" << "Hi " << first << " " << last << "\"" << endl;
		return 0;
	}
}