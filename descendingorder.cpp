#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter a positive integer: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }
    
    cout << "Numbers in descending order from " << n << " to 1 are:" << endl;
    
    for (int i = n; i >= 1; --i) {
        cout << i << " ";
    }
    
    cout << endl;
    
    return 0;
}
