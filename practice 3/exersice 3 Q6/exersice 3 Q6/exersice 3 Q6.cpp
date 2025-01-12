#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int size = 6;
    int* a = new int[size];
    srand(time(0));
    for (int i = 0; i < size; i++) {
      
        int random = rand() % 11 + 10;
        a[i] = random;
    }
    cout << "*****Lucky number finder*****" << endl;
    cout << "Six random numbers between 10 and 20 are picked. \nYou got 2 attempt to find your lucky number.\n";
    for (int attempt = 1;attempt <= 2;attempt++) {
        int x;
        cout << "\n\nEnter your Search value : ";
        cin >> x;
        int index = -1;
        for (int i = 0; i < size; i++)
        {
            if (a[i] == x)
            {
                index = i;
                break;
            }
        }

        if (index != -1) {
            cout << "\nYou found the number in the " << attempt;
            (attempt == 1) ? cout << "st" : cout << "nd";
                cout << " attempt.Congratulations!Index: " << index << endl;
            break;
        }
        else if (attempt == 2) {
            cout << "You are out of attempts. Better luck next time!\n";
        }
        else
        {
            cout << "Search Result: Not found. You have another try.\n";
        }
    }
    delete[] a;
}