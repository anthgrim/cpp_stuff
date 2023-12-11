#include <iostream>
using namespace std;

int main() {
    const float tax = 0.06;
    const double price_per_room = 30;
    double number_of_rooms;
    double total_cost;
    double total_tax;
    double total_estimate;

    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
    cout << "Number of rooms: ";
    cin >> number_of_rooms;

    total_cost = number_of_rooms * price_per_room;
    total_tax = total_cost * tax;
    total_estimate = total_cost + total_tax;

    cout << "Total Cost: $" << total_cost << endl;
    cout << "Total Tax: $" << total_tax << endl;
    cout << "Total Estimate: $" << total_estimate << endl;
    cout << "Expiration Time: 12/31/2023" << endl;

    return 0;
}