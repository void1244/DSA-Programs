#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    system("cls");
    int n;
    int i = 0, ans = 0;
    cout << "Enter The Value Of N : ";
    cin >> n;

    while (n != 0)
    {
        int bits = n & 1;
        ans = (bits * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }

    cout << ans << endl;
    return 0;
}
