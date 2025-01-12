#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 7; i++) {
		if (i < 5) {
			for (int j = 1; j <= i; j++) {
				cout << "* ";
			}
		}
		else {
			for (int j = 1; j <=8-i; j++) {
				cout << "* ";
			}
		}
		cout << endl;
	}
	return 0;
}

