#include <iostream>
using namespace std;

int main() {
    int start, end,n=0;

    cout << "Odd Number Generation" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter final number: ";
    cin >> end;

    if (start == 0 && end == 0) {
        cout << "Please provide not null values" << endl;
    }
    if (start == end && start % 2 == 0) {
        cout << "Both numbers are same" << endl;
    }
    else {
        cout << "Odd list between " << start << " and " << "end" << ": ";
        if (start < end) {
            for (int i = start; i <= end; i++) {
                if (i % 2 != 0) {
                    cout << i;
                    n++;
                    if (i + 2 <= end) cout << ", ";
                   
                }
            }
        }

        else {
            for (int i = start; i >= end; i--) {
                if (i % 2 != 0) {
                    cout << i;
                    n++;
                    if (i - 2 >= end) cout << ", ";
                }
            }
            
        }
        cout << endl;
        cout << "Number of Odds between " << start << " and " << end << ": " << n << endl;
    }
    return 0;

}