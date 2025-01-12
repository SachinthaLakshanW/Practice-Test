#include <iostream>
using namespace std;

int main() {
    int n, n1=1, n2 = 2;
    cout << "Enter a value: ";
    cin >> n;
    cout << "1 ";
    for (int i = 2; i <= n; i++) {
        cout << (i % 2 == 0 ? " - " : " + ") << n1 << "/" << n2<< " ";
        n1 *= 2;
        n2 *= 2;
    }

    cout << endl;
    return 0;
}
