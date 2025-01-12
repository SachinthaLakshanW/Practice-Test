#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cout << "Enter a value: ";
    cin >> num;

    int thousand = num / 1000;
    int hundred = (num / 100) % 10;
    int ten = (num / 10) % 10;
    int one = num % 10;

    string result = "";

    if (thousand > 0) result += to_string(thousand) + " Thousand";
    if (hundred > 0) result += (result.empty() ? "" : ", ") + to_string(hundred) + " Hundred";
    if (ten > 0) result += (result.empty() ? "" : ", ") + to_string(ten) + " Ten";
    if (one >= 0) result += (result.empty() ? "" : ", ") + to_string(one) + " One";

    cout  <<"\"" << result << "\"" << endl;

    return 0;
}
