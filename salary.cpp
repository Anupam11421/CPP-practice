#include <iostream>
#include <cmath> // Include cmath for round function

using namespace std;

int computeSalary(int basic, char grade) {
    int allowances;
    double hra, da, pf;
    hra = 0.2 * basic;
    da = 0.5 * basic;
    pf = 0.11 * basic;

    if (grade == 'A') {
        allowances = 1700;
    } else if (grade == 'B') {
        allowances = 1500;
    } else if (grade == 'C') {
        allowances = 1300;
    } else {
        allowances = 0; // Handle case for unexpected grade values
    }

    int totalSalary = round(basic + hra + da + allowances - pf);
    return totalSalary;
}

int main() {
    int basic;
    char grade;
    cout << "Enter basic salary: ";
    cin >> basic;
    cout << "Enter grade (A/B/C): ";
    cin >> grade;
    int total = computeSalary(basic, grade);
    cout << "Total salary is: " << total << endl;
    return 0;
}
