#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    string input;
    cout << "Enter 10 values separated by commas: ";
    cin >> input;

    vector<int> numbers, evens, odds;
    stringstream ss(input);
    string temp;

    while (getline(ss, temp, ',')) {
        numbers.push_back(stoi(temp));
    }

    for (int num : numbers) {
        if (num % 2 == 0) {
            evens.push_back(num);
        }
        else {
            odds.push_back(num);
        }
    }

    cout << "Even List: ";
    for (size_t i = 0; i < evens.size(); ++i) {
        cout << evens[i] << (i < evens.size() - 1 ? "," : "");
    }
    cout << endl;

    cout << "Odd List: ";
    for (size_t i = 0; i < odds.size(); ++i) {
        cout << odds[i] << (i < odds.size() - 1 ? "," : "");
    }
    cout << endl;

    cout << "No. of Evens: " << evens.size() << endl;
    cout << "No. of Odds: " << odds.size() << endl;

    return 0;
}
