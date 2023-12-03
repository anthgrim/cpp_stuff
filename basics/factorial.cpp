#include <iostream>
using namespace std;

int main() {
    int n = 2;
    int factorial = 1;

    int i = 1;
    while (i <= n) {
        factorial = factorial * i;
        i++;
    }

    cout << "The factorial of " << n << " is " << factorial << endl;
    return 0;
}