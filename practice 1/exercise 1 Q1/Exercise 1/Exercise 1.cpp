#include <iostream>
using namespace std;
int main() {
	double a, b, c, d, x, y, Z;

	cout << "Enter a value : ";
	cin >> a;

	cout << "Enter b value : ";
	cin >> b;

	cout << "Enter c value: ";
	cin >> c;

	cout << "Enter d value: ";
	cin >> d;

	cout << "Enter x value: ";
	cin >> x;

	cout << "Enter y value: ";
	cin >> y;

	if (y == 0) {
		cout << "Error: Division by zero is not allowed." << endl;
		return 1;
	}
	Z = a * x + ((b - c) * (c - d)) / y;

	cout << "Z = " << Z << endl;

	return 0;

}