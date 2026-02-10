#include <iostream>
using namespace std;

long long power(long long a, long long b) {
    // Base case
    if (b == 0)
        return 1;

    // Recursive case
    long long half = power(a, b / 2);

    if (b % 2 == 0)
        return half * half;
    else
        return a * half * half;
}

int main() {
    long long a, b;
    cout << "Enter base and exponent: ";
    cin >> a >> b;

    cout << a << "^" << b << " = " << power(a, b) << endl;
    return 0;
}
