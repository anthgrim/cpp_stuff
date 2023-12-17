#include <iostream>
using namespace std;

double farenheit_to_celsius(double far)
{
    return (far - 32) * (5.0 / 9.0);
}

int main()
{
    double farenheit = 0.0;

    cout << "Farenheit: ";
    cin >> farenheit;

    cout << "Celsius: " << farenheit_to_celsius(farenheit) << endl;

    return 0;
}