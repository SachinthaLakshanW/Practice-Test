#include <iostream>
using namespace std;

int main() {
	int value,fac=1;
	cout << "Enter a value: " << endl;
	cin >> value;
	
	cout << "Factorial of " << value << " is ";
	for (int i = 0; i <= value; i++) {
		fac = i * fac;
		if (i == 0) {
			fac = 1;
		}
	}
	cout << fac << endl;
	return 0;

}
