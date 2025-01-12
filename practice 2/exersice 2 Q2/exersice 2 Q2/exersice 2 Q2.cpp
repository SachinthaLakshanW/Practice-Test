#include <iostream>
#include "manipulation.h"
using namespace std;
using namespace Manipulation;

int main() {
    int choice;
    cout << "Welcome to the Manipulation Package!" << endl;
    cout << "Choose an operation: " << endl;
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cin >> choice;

    switch (choice) {
    case 1: {
        cout << "Choose data type: \n1. int \n2. double \n3. three doubles: \n";
        int type;
        cin >> type;

        switch (type) {
        case 1: {
            int a, b;
            cout << "Enter two integers: \n";
            cin >> a >> b;
            Addition add(a, b);
            break;
        }
        case 2: {
            double a, b;
            cout << "Enter two doubles: \n";
            cin >> a >> b;
            Addition add(a, b);
            break;
        }
        case 3: {
            double a, b, c;
            cout << "Enter three doubles: \n";
            cin >> a >> b >> c;
            Addition add(a, b, c);
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
        }
        break;
    }
    case 2: {
        cout << "Choose data type: \n1. int \n2. double: \n";
        int type;
        cin >> type;

        switch (type) {
        case 1: {
            int a, b;
            cout << "Enter two integers: \n";
            cin >> a >> b;
            Subtraction sub(a, b);
            break;
        }
        case 2: {
            double a, b;
            cout << "Enter two doubles: \n";
            cin >> a >> b;
            Subtraction sub(a, b);
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
        }
        break;
    }
    case 3: {
        cout << "Choose data type: \n1. int \n2. double: \n";
        int type;
        cin >> type;

        switch (type) {
        case 1: {
            int a, b;
            cout << "Enter two integers: \n";
            cin >> a >> b;
            Multiplication mul(a, b);
            break;
        }
        case 2: {
            double a, b;
            cout << "Enter two doubles: \n";
            cin >> a >> b;
            Multiplication mul(a, b);
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
        }
        break;
    }
    case 4: {
        cout << "Choose data type: \n1. int \n2. double: \n";
        int type;
        cin >> type;

        switch (type) {
        case 1: {
            int a, b;
            cout << "Enter two integers: \n";
            cin >> a >> b;
            Division div(a, b);
            break;
        }
        case 2: {
            double a, b;
            cout << "Enter two doubles: \n";
            cin >> a >> b;
            Division div(a, b);
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
        }
        break;
    }
    default:
        cout << "Invalid operation choice!" << endl;
    }

    return 0;
}
