#include<iostream>
using namespace std;

int main()
{
    const double small_room_price = 25;
    const double large_room_price = 35;
    const double tax_rate = 0.06;
    const int valid_dates = 30;
    const string separator = "==============================";

    int number_of_small_rooms;
    int number_of_large_rooms;
    int price_per_small_room;
    int price_per_large_room;
    double total_cost;
    double total_tax;
    double total_estimate;

    cout << "Frank's Carper Cleaning Service" << endl;
    cout << separator << endl;

    cout << "Number of small rooms: ";
    cin >> number_of_small_rooms;

    cout << "Number of large rooms: ";
    cin >> number_of_large_rooms;

    price_per_small_room = small_room_price * number_of_small_rooms;
    price_per_large_room = large_room_price * number_of_large_rooms;
    total_tax = (price_per_small_room * tax_rate) + (price_per_large_room * tax_rate);
    total_cost = price_per_large_room + price_per_small_room;
    total_estimate = total_tax + total_cost;

    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Price per small room: $" << small_room_price << ". Total: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << large_room_price << ". Total: $" << price_per_large_room << endl;
    cout << "Cost: $" << total_cost << endl;
    cout << "Tax: $" << total_tax << endl;
    cout << separator << endl;
    cout << "Total estimate: $" << total_estimate << endl;
    cout << "This estimate is valid for " << valid_dates << " days." << endl;


    return 0;
}