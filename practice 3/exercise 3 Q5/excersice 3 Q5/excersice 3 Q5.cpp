#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the Array : ";
    cin >> size;
    int* a = new int[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter a[" << i << "] value : ";
        cin >> a[i];
    }
    cout << "\n\nGiven list :";
    for (int i = 0; i < size; i++) {
        cout << a[i];
        (i == size - 2) ? cout << " and " :
            (i == size - 1) ? cout << "." : cout << ", ";
    }
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
        cout << "\nSearch Result : your value is located in " << index;
        (index == 1) ? cout << "st" :
            (index == 2) ? cout << "nd" :
            (index == 3) ? cout << "rd" : cout << "th";
        cout << " place.\n";
    }
    else {
        cout << "Search Result: Not found.\n";
    }
  
    delete[] a;
}