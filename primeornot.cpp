// checking the given number is prime or not.

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int i = 2, n;
    cout << "Enter The Value of N : ";
    cin >> n;

    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "The Number " << i << " is Not An Prime!" << endl;
        }
        else
        {
            cout << "The Number " << i << " is An Prime!" << endl;
        }
        i += 1;
    }

    return 0;
}