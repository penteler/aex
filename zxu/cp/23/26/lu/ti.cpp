#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;

public:
    // Function to set the name
    void setName(string n) {
        name = n;
    }
};

// Derived class
class Student : public Person {
private:
    int rollNo;

public:
    // Function to set the roll number
    void setDetails(int r) {
        rollNo = r;
    }

    // Function to display details
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    // Create an object of Student
    Student s;

    // Set student details
    s.setName("Rahul");
    s.setDetails(101);

    // Display student details
    s.displayDetails();

    return 0;
}