#include <iostream>
using namespace std;

// Function to check if a number is palindrome
bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    
    return originalNum == reversedNum;
}

int main() {
    cout << "Palindromic numbers between 100 and 1000 are:" << endl;
    
    for (int i = 100; i <= 1000; ++i) {
        if (isPalindrome(i)) {
            cout << i << " ";
        }
    }
    
    cout << endl;
    
    return 0;
}
