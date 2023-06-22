#include <iostream>
#include <vector>

std::vector<int> incrementInteger(std::vector<int>& digits) {
    int n = digits.size();
    
    // Add 1 to the least significant digit
    digits[n - 1] += 1;
    
    // Check for carry and propagate it if necessary
    int carry = 0;
    for (int i = n - 1; i >= 0; i--) {
        digits[i] += carry;
        carry = digits[i] / 10;
        digits[i] %= 10;
    }
    
    // If there is a carry in the most significant digit, insert a new digit at the beginning
    if (carry > 0) {
        digits.insert(digits.begin(), carry);
    }
    
    return digits;
}

int main() {
    // Example usage
    std::vector<int> digits = {9, 9, 9}; // Large integer: 999
    
    std::cout << "Original integer: ";
    for (int digit : digits) {
        std::cout << digit;
    }
    std::cout << std::endl;
    
    std::vector<int> result = incrementInteger(digits);
    
    std::cout << "Incremented integer: ";
    for (int digit : result) {
        std::cout << digit;
    }
    std::cout << std::endl;
    
    return 0;
}
