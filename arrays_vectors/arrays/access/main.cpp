#include <iostream>
using namespace std;

int main() 
{
    int test_scores [3] = {100,95,88};

    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;

    int initialized [5] = {0};

    for (int i = 0; i < 5; i++) {
        cout << initialized[i] << endl;
    }

    return 0;
}