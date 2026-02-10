#include <iostream>  
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// write function to print all primes upto N
void printPrimes(int N) {
    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {  
            cout << i << " ";
        }
    }
}

int main() {
    int n;
    cin >> n;
//    if (isPrime(n)) {
        // cout << n << " is prime!" << endl;
    // } else {
        // cout << n << " is not prime!" << endl;
    // }
        // '''
    printPrimes(n);
    return 0;
}
 // how this function work here in the main it call printPrimes then in printPrimes it again call to check isPrime that's how it work 