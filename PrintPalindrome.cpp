#include <iostream>
using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int num)
{
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0)
    {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main()
{
    int start, end;

    cout << "Enter the starting number: ";
    cin >> start;

    cout << "Enter the ending number: ";
    cin >> end;

    cout << "Palindrome numbers between " << start << " and " << end << " are:" << endl;

    for (int i = start; i <= end; ++i)
    {
        if (isPalindrome(i))
        {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
