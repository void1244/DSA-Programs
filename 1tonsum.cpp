//sum of 1 to n using while loops.

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int i = 0, n;
    int sum = 0;
    cout << "Enter The Value of N : ";
    cin >> n;

    while (i <= n)
    {
        sum += i;
        i++;
    }
    cout << sum << endl;

    return 0;
}