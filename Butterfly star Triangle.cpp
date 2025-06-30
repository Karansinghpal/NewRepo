#include <iostream>
using namespace std;

void space(int n) {
    // Upper part of the butterfly
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the butterfly
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int x;
    cout << "Enter Number: ";
    cin >> x;
    space(x);
    return 0;
}

