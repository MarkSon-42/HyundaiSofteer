#include <iostream>  // Include the input/output stream library

// Include the vector library for using the vector container
#include <vector>

using namespace std;  // Use the standard namespace for easier access to standard C++ library components

int main() {  // The main function, where the program execution begins

    int n, t;  // Declare two integers to store the length of the sequence and the threshold
    cin >> n >> t;  // Read values for n and t from the standard input (keyboard)

    vector<int> sequence(n);  // Declare a vector to store the sequence of n numbers

    // Read n numbers and store them in the 'sequence' vector
    for (int i = 0; i < n; ++i) {
        cin >> sequence[i];
    }

    int maxLength = 0;  // Initialize a variable to store the maximum length of the subsequence
    int currentLength = 0;  // Initialize a variable to store the current length of the subsequence

    // Iterate through the sequence to find the maximum length of a subsequence
    for (int i = 0; i < n; ++i) {
        if (sequence[i] > t) {
            currentLength++;  // Increment the current length if the current number is greater than t
        } else {
            maxLength = max(maxLength, currentLength);  // Update maxLength if the currentLength is greater
            currentLength = 0;  // Reset currentLength when the current number is not greater than t
        }
    }

    maxLength = max(maxLength, currentLength);

    cout << maxLength << endl;

    return 0;

}