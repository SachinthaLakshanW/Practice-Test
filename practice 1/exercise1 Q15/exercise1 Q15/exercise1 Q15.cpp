#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    double doubleList[5];
    cout << "Enter 5 double values: ";

    for (int i = 0; i < 5; i++) {
        cin >> doubleList[i];
    }

    cout << "Given list: ";
    for (int i = 0; i < 5; i++) {
        cout << doubleList[i] << (i < 4 ? ", " : "");
    }
    cout << endl;

    sort(doubleList, doubleList + 5);

    cout << "Sorted list: ";
    for (int i = 0; i < 5; i++) {
        cout << doubleList[i] << (i < 4 ? ", " : "");
    }
    cout << endl;

    return 0;
}
