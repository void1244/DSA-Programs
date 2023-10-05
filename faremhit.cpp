// Fahrenheit to Celsius Conversion.

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    float Fahrenheit, Celsius;
    cout << "Enter The Temperature In Fahrenheit : ";
    cin >> Fahrenheit;
    Celsius = ((Fahrenheit - 32) * 5 / 9);

    cout<<"The Conversion of Temprature from Fahrenheit to Celsius is : "<< Celsius << " Degree Celsius";
    return 0;
}