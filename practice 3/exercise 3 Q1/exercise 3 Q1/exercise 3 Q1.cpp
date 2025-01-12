#include <iostream>
#include <string>
using namespace std;

void print(int n) {
	for (int i = 1; i <= n/2; i++) {
		for (int j = 1; j <= 2 * i - 1;j++) {
			cout << "* ";
		}
		cout << endl;
	}
}

int main() {
	int number;
	cout << "Enter a Value : ";
	cin >> number;
	print(number);

	return 0;
}