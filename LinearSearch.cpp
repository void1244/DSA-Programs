
## linear Search
Linear Search is a simple searching algorithm that scans each element of a list sequentially until it finds the target element or reaches the end of the list. It's straightforward but may not be the most efficient for large datasets. Here's how it works:

1. Start from the beginning of the list.

2. Compare each element with the target element.

3. If a match is found, return the index of the element.

4. If the end of the list is reached without finding the target, return a "not found" indicator (e.g., -1).

#include <iostream>
#include <vector>

// Function to perform linear search
int linearSearch(const std::vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i; // Return the index where the target is found
        }
    }
    return -1; // Return -1 if the target is not found in the array
}

int main() {
    std::vector<int> arr = {12, 34, 45, 9, 8, 56, 23};
    int target = 56;

    int result = linearSearch(arr, target);

    if (result != -1) {
        std::cout << "Element " << target << " found at index " << result << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}