#include <iostream>
#include <sstream>
#include <unordered_map>
using namespace std;

int main() {
    string input;
    cout << "Enter numbers separated by commas: ";
    cin >> input;

    unordered_map<int, int> frequency;
    stringstream ss(input);
    string temp;

    while (getline(ss, temp, ',')) {
        int num = stoi(temp);
        frequency[num]++;
    }

    int checkNumber;
    cout << "Enter a number to check frequency: ";
    cin >> checkNumber;

    bool foundCheckNumber = false;

    cout << "Repeated Numbers:" << endl;
    for (auto& pair : frequency) {
        if (pair.second > 1) {
            cout << pair.first << " repeats " << pair.second << " times" << endl;
            if (pair.first == checkNumber) {
                foundCheckNumber = true;
            }
        }
    }

    if (!foundCheckNumber) {
        if (frequency.find(checkNumber) != frequency.end()) {
            cout << "The number " << checkNumber << " appears " << frequency[checkNumber] << " times." << endl;
        }
        else {
            cout << "The number " << checkNumber << " does not appear in the list." << endl;
        }
    }

    return 0;
}
