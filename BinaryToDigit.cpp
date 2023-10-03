#include<bits/stdc++.h>

using namespace std;

int main()
{
    int binary;
    cout<<"\nEnter the binary number : ";
    cin>>binary;
    int num=0,i=0;
    while (binary>0)
    {
        int t = binary%10;
        if (t==1)
        {
            num+= pow(2,i);
        }
        binary/=10;
        i++;
    }
    cout<<"\nThe decimal number is : "<<num<<endl;
    return 0;
}