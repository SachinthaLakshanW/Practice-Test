#ifndef MANIPULATION_H
#define MANIPULATION_H

#include <iostream>
using namespace std;

namespace Manipulation {

    // Addition Class
    class Addition {
    public:
        Addition(int a, int b) {
            cout << "Adding two integers: " << a + b << endl;
        }

        Addition(double a, double b) {
            cout << "Adding two doubles: " << a + b << endl;
        }

        Addition(double a, double b, double c) {
            cout << "Adding three doubles: " << a + b + c << endl;
        }
    };

    // Subtraction Class
    class Subtraction {
    public:
        Subtraction(int a, int b) {
            cout << "Subtracting two integers: " << a - b << endl;
        }

        Subtraction(double a, double b) {
            cout << "Subtracting two doubles: " << a - b << endl;
        }
    };

    // Multiplication Class
    class Multiplication {
    public:
        Multiplication(int a, int b) {
            cout << "Multiplying two integers: " << a * b << endl;
        }

        Multiplication(double a, double b) {
            cout << "Multiplying two doubles: " << a * b << endl;
        }
    };

    // Division Class
    class Division {
    public:
        Division(int a, int b) {
            if (b != 0)
                cout << "Dividing two integers: " << a / b << endl;
            else
                cout << "Error: Division by zero!" << endl;
        }

        Division(double a, double b) {
            if (b != 0)
                cout << "Dividing two doubles: " << a / b << endl;
            else
                cout << "Error: Division by zero!" << endl;
        }
    };

} // namespace Manipulation

#endif
