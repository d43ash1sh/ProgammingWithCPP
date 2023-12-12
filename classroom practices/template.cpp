#include <iostream>

using namespace std;

class Student
{
private:
  string name;
  int rollNumber;

public:
  Student(string name, int rollNumber)
  {
    this->name = name;
    this->rollNumber = rollNumber;
  }

  // Copy constructor
  Student(const Student &other)
  {
    name = other.name;
    rollNumber = other.rollNumber;
  }

  void printStudent()
  {
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << rollNumber << endl;
  }
};

int main()
{
  // Creating a Student object
  Student student1("John Doe", 123);
  student1.printStudent();

  // Creating a copy of student1 using the copy constructor
  Student student2 = student1;
  student2.printStudent();

  // Creating a copy of student1 using the initialization list
  Student student3(student1);
  student3.printStudent();

  return 0;
}
