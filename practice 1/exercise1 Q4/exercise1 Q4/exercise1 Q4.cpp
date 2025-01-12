#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Even Number Generation" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter final number: ";
    cin >> end;

    if (start == 0 && end == 0) {
        cout << "Please provide not null values" << endl;
    }
    if (start ==  end && start%2!=0 ) {
        cout << "Both are same number " << endl;
    }
    else {
        cout << "Even list between " << start << " and " << end << ": ";
        if (start < end) {
            for (int i = start; i <= end; i++) {
                if (i % 2 == 0) {
                    cout << i;
                    if (i + 2 <= end) cout << ", ";
                }
            }
        }
        else {
            for (int i = start; i >= end; i--) {
                if (i % 2 == 0) {
                    cout << i;
                    if (i - 2 >= end) cout << ", ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
