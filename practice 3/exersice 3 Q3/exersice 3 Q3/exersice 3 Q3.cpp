#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter a Number : ";
	cin >> num;

	cout << "Multiplication table: " << num;
	cout<< "\n************************"<< endl;
	for (int i = 1;i <= 10;i++) {
		cout << i << "x" << num << " = " << i * num << endl;
	}
	return 0;
}