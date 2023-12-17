#include <iostream>
using namespace std;

int main()
{
    const double eur_usd = 1.09;
    double input_eur = 0.0;
    double result = 0.0;

    cout << "Enter Euros: ";
    cin >> input_eur;

    result = input_eur * eur_usd;

    cout << "EU " << input_eur << " = "
         << "$" << result << endl;

    return 0;
}