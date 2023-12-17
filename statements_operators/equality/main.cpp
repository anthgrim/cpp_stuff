#include <iostream>
using namespace std;

int main()
{
    bool equal = false;
    bool not_equal = false;

    int num1, num2;

    cout << boolalpha;

    cout << "Enter two integers separated by space: ";
    cin >> num1 >> num2;

    equal = (num1 == num2);
    not_equal = (num1 != num2);

    cout << equal << endl;
    cout << not_equal << endl;

    return 0;
}