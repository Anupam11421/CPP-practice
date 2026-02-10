//Given a brick wall of 4 * N and files of size 4 *1 you have to find out the ttal no of ways to arrange the tiles on the wall 

#include <iostream>
using namespace std;

int countWays(int n) {
    // Base cases
    if (n == 0) return 1;
    if (n == 1 || n == 2 || n == 3) return 1;
    if (n == 4) return 2;

    // Recursive relation
    return countWays(n - 1) + countWays(n - 4);
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    cout << "Total ways = " << countWays(n) << endl;
    return 0;
}
