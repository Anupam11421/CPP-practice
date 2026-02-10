#include <iostream>
#include <vector>
using namespace std;

// Function to perform staircase search
pair<int,int> staircaseSearch(vector<vector<int>> &matrix, int key) {
    // Check if matrix is empty
    if (matrix.empty() || matrix[0].empty())
        return {-1, -1};

    int rows = matrix.size();        // number of rows
    int cols = matrix[0].size();     // number of columns

    int r = 0;           // start row = 0 (top)
    int c = cols - 1;    // start column = last column (rightmost)

    // Loop until we are inside the matrix
    while (r < rows && c >= 0) {
        if (matrix[r][c] == key) {
            return {r, c};  // Found (return 0-based position)
        }
        else if (matrix[r][c] > key) {
            c--;   // Current element bigger → move LEFT
        }
        else {
            r++;   // Current element smaller → move DOWN
        }
    }

    return {-1, -1};   // Not found
}

int main() {
    vector<vector<int>> matrix = {
        {1, 4, 9, 10},
        {2, 5, 9, 15},
        {6, 16, 18, 20},
        {11, 17, 19, 23}
    };

    int key = 17;
    pair<int,int> pos = staircaseSearch(matrix, key);

    if (pos.first != -1) {
        cout << "Element " << key << " found at (row=" 
             << pos.first << ", col=" << pos.second << ")\n";
    } else {
        cout << "Element " << key << " not found.\n";
    }

    return 0;
}
