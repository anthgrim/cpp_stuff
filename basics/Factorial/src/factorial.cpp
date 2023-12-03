#include <iostream>
using namespace std;

/**
 * Get factorial of a number
 * 
 * @param int input
 * @return factorial product
*/
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