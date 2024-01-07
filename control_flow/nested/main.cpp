#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    char letter_grade;
    const int min = 0;
    const int max = 100;

    cout << "Enter your score on the exam (0-100): ";
    cin >> score;

    if (score >= min && score <= max)
    {
        if (score > 90)
        {
            letter_grade = 'A';
        }
        else if (score > 80)
        {
            letter_grade = 'B';
        }
        else if (score > 70)
        {
            letter_grade = 'C';
        }
        else if (score > 60)
        {
            letter_grade = 'D';
        }
        else
        {
            letter_grade = 'F';
        }

        cout << "Your grade is " << letter_grade << endl;

        if (letter_grade == 'F')
        {
            cout << "Sorry, you must repeat this class" << endl;
        }
        else
        {
            cout << "Congrats!" << endl;
        }
    }
    else
    {
        cout << "The score you entered is out of range" << endl;
    }

    return 0;
}