#include <iostream>
#include <vector>
using namespace std;

// Function to perform staircase search
pair<int,int> staircaseSearch(vector<vector<int>> &matrix, int key) {
    if (matrix.empty() || matrix[0].empty())
        return {-1, -1};

    int rows = matrix.size();
    int cols = matrix[0].size();

    int r = 0;
    int c = cols - 1; // start from top-right

    while (r < rows && c >= 0) {
        if (matrix[r][c] == key) {
            return {r, c};  // found
        } else if (matrix[r][c] > key) {
            c--;   // move left
        } else {
            r++;   // move down
        }
    }

    return {-1, -1}; // not found
}

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // define matrix
    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter elements of matrix (row-wise):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int key;
    cout << "Enter key to search: ";
    cin >> key;

    // Search
    pair<int,int> pos = staircaseSearch(matrix, key);

    if (pos.first != -1) {
        cout << "Element " << key << " found at (row=" 
             << pos.first << ", col=" << pos.second << ") [0-based]\n";
    } else {
        cout << "Element " << key << " not found.\n";
    }

    return 0;
}
2D