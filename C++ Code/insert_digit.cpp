#include <iostream>
#include <string>
using namespace std;

void process_test_case() {
    int length, number, index = -1;
    string input, output;
    cin >> length >> number >> input;

    // Find the index of the first digit that is less than the given number
    for (int i = 0; i < length; i++) {
        if (input[i] - '0' < number) {
            output += '0' + number;  // Add the given number to the output string
            index = i;
            break;
        }
        output += input[i];
    }

    // If all digits are greater than or equal to the given number, add the number at the end
    if (index == -1) {
        output += '0' + number;
    } else {
        // Add the remaining digits to the output string
        for (int i = index; i < length; i++) {
            output += input[i];
        }
    }

    cout << output << endl;
}

int main() {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        process_test_case();
    }
}