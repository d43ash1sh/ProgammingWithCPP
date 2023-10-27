#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;
    static int totalCredits;
    static float totalGradePoints;

public:
    Student(string n, int roll) : name(n), rollNumber(roll) {}

    void inputGrades()
    {
        int credits;
        float grade;
        cout << "Enter the total number of credits in this semester : ";
        cin >> credits;
        cout << "Enter the grade (0-10) for the course: ";
        cin >> grade;

        totalCredits += credits;
        totalGradePoints += credits * (grade);
    }

    static float calculateSGPA()
    {
        return totalGradePoints / totalCredits;
    }

    static float calculateCGPA()
    {
        return totalGradePoints / totalCredits;
    }
};

int Student::totalCredits = 0;
float Student::totalGradePoints = 0;

int main()
{
    string name;
    int rollNumber;
    int numSem;

    cout << "Enter student's name: ";
    cin >> name;
    cout << "Enter student's roll number: ";
    cin >> rollNumber;

    Student student(name, rollNumber);

    cout << "Enter the number of semester: ";
    cin >> numSem;

    for (int i = 0; i < numSem; i++)
    {
        student.inputGrades();
    }

    cout << "SGPA: " << Student::calculateSGPA() << endl;
    cout << "CGPA: " << Student::calculateCGPA() << endl;

    return 0;
}