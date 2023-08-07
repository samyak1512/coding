#include <iostream>
#include <string>

int maximize_number(int x) {
    std::string digits = std::to_string(x); // Convert the number to a string
    for (int i = digits.size() - 1; i >= 0; i--) {
        if (digits[i] > '4') {
            digits[i - 1] = digits[i - 1] + 1; // Increase the previous digit by 1
            for (int j = i; j < digits.size(); j++) {
                digits[j] = '0'; // Set all digits to the right to 0
            }
        }
    }
    return std::stoi(digits); // Convert the string back to an integer
}

int main() {
    long long number = 40862016542130810467;
    int maximized_number = maximize_number(number);
    std::cout << maximized_number << std::endl;
    return 0;
}