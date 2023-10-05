
#include <iostream>

int main() {
    int N;

    // Input the value of N
    std::cout << "Enter the value of N: ";
    std::cin >> N;

    // Check if N is non-negative
    if (N < 0) {
        std::cout << "N must be a non-negative integer." << std::endl;
        return 1; // Exit with an error code
    }

    // Loop to print stars from 1 to N
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl; // Move to the next line after printing stars
    }

    return 0; // Exit successfully
}
