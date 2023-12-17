#include <iostream>
using namespace std;

int main()
{
    const int dollar = 100;
    const int quarter = 25;
    const int dime = 10;
    const int nickel = 5;
    const int penny = 1;

    int cents = 0;
    int out_dollar = 0;
    int out_quarter = 0;
    int out_dime = 0;
    int out_nickel = 0;
    int out_penny = 0;

    cout << "Enter the number of cents: ";
    cin >> cents;

    if (cents != 0)
    {
        if (cents >= dollar)
        {
            out_dollar = cents / dollar;
            cents = cents % dollar;
        }

        if (cents >= quarter)
        {
            out_quarter = cents / quarter;
            cents = cents % quarter;
        }

        if (cents >= dime)
        {
            out_dime = cents / dime;
            cents = cents % dime;
        }

        if (cents >= nickel)
        {
            out_nickel = cents / nickel;
            cents = cents % nickel;
        }

        out_penny = cents;
    }

    cout << "Dollars: " << out_dollar << endl;
    cout << "Quarters: " << out_quarter << endl;
    cout << "Dimes: " << out_dime << endl;
    cout << "Nickels: " << out_nickel << endl;
    cout << "Pennies: " << out_penny << endl;

    return 0;
}