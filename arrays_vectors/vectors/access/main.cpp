#include <iostream>
#include <vector>
using namespace std;

void displayVectorContents (vector <int> input_vector) {
    for (int i = 0; i < input_vector.size(); i++) {
        cout << "Position " << i << " " << input_vector.at(i) << endl;
    }
}

int main () 
{
    vector <int> numbers (1, 10);

    cout << numbers.at(0) << endl;

    // Assignment
    numbers.at(0) = 90;

    // Add more
    numbers.push_back(100);
    cout << numbers.at(1) << endl;

    displayVectorContents(numbers);

    // Multidimention
    // vector <vector<Elements Type>> vectors_name (total, initializer)

    return 0;
}