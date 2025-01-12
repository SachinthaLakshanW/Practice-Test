#include <iostream>
using namespace std;

int main() {
    int num;
    bool primenumber = true;

    cout << "Prime Check" << endl;
    cout << "**********" << endl;
    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        primenumber = false;
    }
    else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                primenumber = false;
                break;
            }
        }
    }

    if (primenumber) {
        cout << "\"" << num << " is a prime number\"" << endl;
    }
    else {
        cout << "\"" << num << " is not a prime number\"" << endl;
    }

    return 0;
}
