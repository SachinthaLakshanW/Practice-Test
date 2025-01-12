#include <iostream>
using namespace std;

int main() {
    int num, n1 = 1, n2 = 1, n3 = 2, n4 = 2;
    cout << "Enter a value: ";
    cin >> num;
    cout << "1, ";
    for (int i = 1;i <= num - 1; i++) {
        n1 = 3 * i;
        cout << n1;
        if (i < num - 1) cout << ", ";
    }
    cout << endl;

    cout << "1";
    for (int i = 1;i <= num - 1; i++) {
        cout << " +" << n2 << "/" << n3;
        n2++;
        n3++;
    }
    cout << endl;

    cout << "1";
    for (int i = 1;i <= num-1; i++) {
        if (i % 2 == 0)
        {
            cout << " -";
        }
        else {
            cout << " +";
        }
        cout << 1 << "/" << n4;
        n4++;

    }
    cout << endl;
    return 0;
}