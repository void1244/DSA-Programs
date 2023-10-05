// sum of 1 to n of even numbers in c++ using while loop.

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
        if ((i % 2) == 0)
        {
            sum += i;
        }
        i++;
    }
    cout << sum << endl;

    return 0;
}