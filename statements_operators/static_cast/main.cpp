#include <iostream>
#include <vector>
using namespace std;

int get_sum(vector<int> numbers)
{
    int sum = 0;

    for (int i = 0; i < numbers.size(); i++)
    {
        sum = sum + numbers.at(i);
    }

    return sum;
}

double get_average(int sum, int total)
{
    return static_cast<double>(sum) / total;
}

int main()
{
    // static_cast<type>
    vector<int> input_numbers;
    int num1, num2, num3;

    cout << "Enter three integers separated by space: ";

    cin >> num1 >> num2 >> num3;
    input_numbers.push_back(num1);
    input_numbers.push_back(num2);
    input_numbers.push_back(num3);

    const int sum = get_sum(input_numbers);
    const double average = get_average(sum, input_numbers.size());

    cout << "The sum of the three numbers is: " << sum << endl;
    cout << "The average of the three numbers is: " << average << endl;

    return 0;
}
