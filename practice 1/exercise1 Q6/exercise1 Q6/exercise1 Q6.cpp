#include <iostream>
using namespace std;

int main() {
    int n1 = 0, n2 = 1, nextTerm, terms;

    cout << "Enter the number of terms: ";
    cin >> terms;

    cout << "Fibonacci Sequence: " << n1 << ", " << n2;

    for (int i = 3; i <= terms; i++) {
        nextTerm = n1 + n2;
        cout << ", " << nextTerm;
        n1 = n2;
        n2 = nextTerm;
    }

    cout << endl;
    return 0;
}
