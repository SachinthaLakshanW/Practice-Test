#include <iostream>
using namespace std;

int main() {
    int A, B, C;

    cout << "Enter A value: ";
    if (!(cin >> A)) {
        cout << "Error: A must be a number!" << endl;
        return 1;
    }

    cout << "Enter B value: ";
    if (!(cin >> B)) {
        cout << "Error: B must be a number!" << endl;
        return 1;
    }

    cout << "Enter C value: ";
    if (!(cin >> C)) {
        cout << "Error: C must be a number!" << endl;
        return 1;
    }

    if (A <= B && A <= C) {
        cout << "A is smallest" << endl;
    }
    else if (B <= A && B <= C) {
        cout << "B is smallest" << endl;
    }
    else {
        cout << "C is smallest" << endl;
    }

    return 0;
}