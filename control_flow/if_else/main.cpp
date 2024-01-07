#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    const int target = 10;

    cout << "Enter a number and I'll compare it to " << target << ": ";
    cin >> num;

    if (num >= target)
    {
        cout << "\n================================" << endl;
        cout << num << " is greater than or equal to " << target << endl;
    }
    else
    {
        cout << "\n================================" << endl;
        cout << num << " is less than " << target << endl;
    }

    return 0;
}