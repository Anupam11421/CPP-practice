#include <iostream>
#include <string>
using namespace std;

// Function to reverse a section of a string
void reverse(string &s, int start, int end) {
    while (start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}

// Function to reverse the words in a string
void reverseWords(string &s) {
    int n = s.length();
    int start = 0, end = 0;

    // Reverse each word in the string
    while (end < n) {
        while (end < n && s[end] != ' ') {
            end++;
        }
        reverse(s, start, end - 1);
        end++;
        start = end;
    }
    
    // Reverse the entire string
    reverse(s, 0, n - 1);
}

int main() {
    string s = "Hello world this is a test";
    cout << "Original string: " << s << endl;
    reverseWords(s);
    cout << "Reversed string: " << s << endl;
    return 0;
}
