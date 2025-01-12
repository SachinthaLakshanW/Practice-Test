#include <iostream> 
#include <algorithm>
using namespace std;

void SortMiddle(int a) {
	int* array = new int[a];
	
	for (int i = 0; i < a; i++) {
		cout << "Enter list [" << i << "] value : ";
		cin >> array[i];
	}
	cout << endl;
	cout << "Given list : ";
	for (int i = 0; i < a; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
	sort(array, array+a);
	cout << "Sorted list : ";
	for (int i = 0; i < a; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
	cout << "Middle value : ";
	if (a % 2 == 0) {
		cout << array[a / 2 - 1] << " " << array[a / 2];
	}
	else {
		cout << array[a / 2];
	}
}
int main() {
	int size;
	cout << "Enter your list size : ";
	cin >> size;
	SortMiddle(size);
	return 0;
}