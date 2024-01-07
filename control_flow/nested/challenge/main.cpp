#include <iostream>
#include <iomanip>
using namespace std;

/*
    Shipping cost calculator

    Ask the user for package dimension in inches
    length, width, height - these should integers

    All dimension must be 10 inches or less or we cannot ship it

    Base cost is $2.50
    If package volume is greater than 100 cubic inches, there is a 10% extra charge
    if package volume is greater than 500 cubic inches, there is a 25% extra charge
*/

int main()
{
    int length = 0;
    int width = 0;
    int height = 0;
    const float base_cost = 2.50;
    const int max_dim = 10;

    cout << "Enter length, width and heigh separated by a space: ";
    cin >> length >> width >> height;

    if (length > max_dim || width > max_dim || height > max_dim)
    {
        cout << "Sorry, package is out of dimension range. Cannot be shipped" << endl;
    }
    else
    {
        double total_cost = base_cost;
        const int volume = length * width * height;
        const int first_threshold = 100;
        const float first_threshold_percentage = 0.1;
        const int second_threshold = 500;
        const float second_threshold_percentage = 0.25;

        cout << "Your package volume is: " << volume << endl;

        // Check for extra charges
        if (volume > first_threshold && volume <= second_threshold)
        {
            total_cost += first_threshold_percentage * base_cost;
        }
        else if (volume > second_threshold)
        {
            total_cost += second_threshold_percentage * base_cost;
        }

        cout << fixed << setprecision(2);
        cout << "Your total is $" << total_cost << endl;
    }

    return 0;
}