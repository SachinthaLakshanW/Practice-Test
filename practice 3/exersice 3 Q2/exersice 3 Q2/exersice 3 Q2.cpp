#include <iostream>
#include <string>
using namespace std;

int main() {
	int num;
	cout << "Multification Table \n";
	cout << "***********************\n";

		for (int i = 1; i <= 10;i++) {
			for (int j = 1; j <= 10;j++) {
				cout << i*j << " ";
			}
			cout << endl;
	}
		return 0;
}