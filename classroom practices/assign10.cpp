// write a c++ program to save the cgpa and sgpa information of each semester using a class called 'semester' and static data member

// course credit -
// 1st 20
// 2nd 30
// 3rd 20
// 4th 30
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;
    int credits[4];
    float grades[4];

public:
    Student(string n, int roll) : name(n), rollNumber(roll)
    {
        for (int i = 0; i < 4; i++)
        {
            credits[i] = 0;
            grades[i] = 0.0;
        }
    }

    void inputGrades()
    {
        for (int i = 0; i < 4; i++)
        {
            cout << "Enter the total number of credits for semester " << (i + 1) << ": ";
            cin >> credits[i];

            if (credits[i] <= 0)
            {
                cout << "Invalid input. Credits must be greater than 0. Please try again." << endl;
                i--;
                continue;
            }

            cout << "Enter the grade (0-10) for semester " << (i + 1) << ": ";
            cin >> grades[i];

            if (grades[i] < 0 || grades[i] > 10)
            {
                cout << "Invalid input. Grade must be between 0 and 10. Please try again." << endl;
                i--;
            }
        }
    }

    float calculateSGPA()
    {
        float totalSGPA = 0.0;
        int totalCredits = 0;

        for (int i = 0; i < 4; i++)
        {
            totalSGPA += (grades[i] * credits[i]);
            totalCredits += credits[i];
        }

        return totalSGPA / totalCredits;
    }

    float calculateCGPA()
    {
        float totalCGPA = 0.0;
        int totalCredits = 0;

        for (int i = 0; i < 4; i++)
        {
            totalCGPA += (grades[i] * credits[i]);
            totalCredits += credits[i];
        }

        return totalCGPA / totalCredits;
    }
};

int main()
{
    string name;
    int rollNumber;

    cout << "Enter student's name: ";
    cin >> name;
    cout << "Enter student's roll number: ";
    cin >> rollNumber;

    Student student(name, rollNumber);

    student.inputGrades();

    cout << "SGPA: " << student.calculateSGPA() << endl;
    cout << "CGPA: " << student.calculateCGPA() << endl;

    return 0;
}
