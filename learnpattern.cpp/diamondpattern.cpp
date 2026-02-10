#include <iostream>
using namespace std;

void printStarDiamond(int n) {
    int space = n - 1;

    // Top half of the diamond
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < space; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
        space--;
    }

    // Bottom half of the diamond
    space = 0;
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < space; j++) {
            cout << " ";
        }
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
        space++;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for the star diamond pattern: ";
    cin >> n;
    printStarDiamond(n);
    return 0;
}
