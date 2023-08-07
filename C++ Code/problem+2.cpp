#include <iostream>
#include <string>
using namespace std;

int maximize_number(int x) {
    string digits = to_string(x);

    for (int i = 0; i < digits.length(); ++i) {
        if (digits[i] >= '5') {
            digits[i] = '0';
        } else {
            break;
        }
    }

    return stoi(digits);
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int number;
        cin >> number;

        int maximized_number = maximize_number(number);
        cout << maximized_number << endl;
    }

    return 0;
}
