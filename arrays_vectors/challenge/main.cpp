#include <iostream>
#include <vector>
using namespace std;

void displaySize (vector <int> input)
{
    cout << "Size: " << input.size() << endl;
}

void displayVectorContents (vector <int> input)
{
    displaySize(input);

    for (int i = 0; i < input.size(); i++) 
    {
        cout << "Element: " << input.at(i) << endl;
    }
}

void displayVectorContents2d(vector <vector <int> > input) 
{
    for (int i = 0; i < input.size(); i++) 
    {
        cout << "Vector: " << i << endl;
        displayVectorContents(input.at(i));
    }
}

int main () 
{
    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);
    cout << "\nDisplaying One Dimension vector" << endl;
    displayVectorContents(vector1);

    vector2.push_back(100);
    vector2.push_back(200);
    cout << "\nDisplaying One Dimension vector" << endl;
    displayVectorContents(vector2);

    vector <vector <int> > vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout << "\nDisplaying Two Dimension vector" << endl;
    displayVectorContents2d(vector_2d);

    vector1.at(0) = 100;
    cout << "\nDisplaying Two Dimension vector" << endl;
    displayVectorContents2d(vector_2d);

    cout << "\nDisplaying One Dimension vector" << endl;
    displayVectorContents(vector1);

    return 0;
}