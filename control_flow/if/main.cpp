#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    const int min = 10;
    const int max = 100;

    cout << "Enter a number between " << min << " and " << max << ": ";
    cin >> num;

    if (num >= min)
    {
        cout << "\n========== If Statement 1 ==========" << endl;
        cout << num << " is greater than or equal to " << min << endl;
    }

    if (num <= max)
    {
        cout << "\n========== If Statement 2 ==========" << endl;
        cout << num << " is less than or equal to " << max << endl;
    }

    if (num >= min && num <= max)
    {
        cout << "\n========== If Statement 3 ==========" << endl;
        cout << num << " between " << min << " and " << max << endl;
    }

    if (num == min || num == max)
    {
        cout << "\n========== If Statement 4 ==========" << endl;
        cout << num << " right on the boundary " << endl;
    }

    if (num < min || num > max)
    {
        cout << "\n========== If Statement 5 ==========" << endl;
        cout << num << " is out of boundary " << endl;
    }

    return 0;
}