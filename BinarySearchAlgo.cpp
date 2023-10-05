
// ## Binary Search Algorithm:

// 1. Input a sorted array arr and a target value target.

// 2. Initialize two pointers, left and right, to the first and last indices of the array, respectively.

// 3. While left is less than or equal to right, do the following:

// a. Calculate the midpoint index as (left + right) / 2.

// b. If arr[mid] is equal to target, return mid (the index where the target is found).

// c. If arr[mid] is less than target, update left to mid + 1 (search the right half).

// d. If arr[mid] is greater than target, update right to mid - 1 (search the left half).

// 4. If the loop terminates without finding the target, return -1 (indicating that the target is not in the array).

#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2; // Calculate midpoint to avoid overflow
        if (arr[mid] == target) {
            return mid; // Target found, return its index
        }
        if (arr[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }
    
    return -1; // Target not found in the array
}

int main() {
    std::vector<int> arr = {1, 3, 5, 7, 9, 11, 13};
    int target = 7;
    
    int result = binarySearch(arr, target);
    
    if (result != -1) {
        std::cout << "Element " << target << " found at index " << result << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }
    
    return 0;
}

