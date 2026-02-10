#include <iostream>
using namespace std;

void printNumberDiamond(int n) {
    int space = n - 1;
    
    // Top half of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
        space--;
    }

    // Bottom half of the diamond
    space = 1;
    for (int i = n-1; i >= 1; i--) {
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
        space++;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for the number diamond pattern: ";
    cin >> n;
    printNumberDiamond(n);
    return 0;
}
