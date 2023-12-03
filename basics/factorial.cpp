#include <iostream>
using namespace std;

int get_factorial (int input) {
    int factorial = 1;
    int i = 1;

    while (i <= input) {
        factorial = factorial * i;
        i++;
    }

    return factorial;
}

int main() {
    int n = 5;
    int factorial_of_number = get_factorial(n);

    cout << "The factorial of " << n << " is " << factorial_of_number << endl;
    return 0;
}