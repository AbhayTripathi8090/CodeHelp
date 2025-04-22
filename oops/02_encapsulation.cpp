#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int id;
    int age;
    string name;
    int nos;
    float* gpa;  // Pointer for dynamically allocated GPA
    string gf;

public:
    // Default Constructor
    Student() {
        cout << "Student default ctor is called" << endl;
        gpa = nullptr;
    }

    // Parameterized Constructor
    Student(int id, int age, string name, int nos, float gpa) {
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = new float(gpa);
    }

    // Destructor to avoid memory leaks
    ~Student() {
        delete gpa;
    }

    void study() {
        cout << "Studying" << endl;
    }

    // Corrected setGpa() function
    void setGpa(float a) {
        if (gpa == nullptr) {
            gpa = new float;  // Allocate memory if it was not allocated
        }
        *gpa = a;
    }

    // Getter for GPA
    float getGpa() {
        return (gpa != nullptr) ? *gpa : 0.0;
    }

    // Corrected setAge() function
    void setAge(int a) {
        this->age = a;
    }

    // Getter for Age
    int getAge() {
        return age;
    }
};

int main() {
    Student* A = new Student(1, 20, "John", 5, 90.0);

    cout << "Initial GPA: " << A->getGpa() << endl;  // Correct usage
    A->setGpa(6.7);
    cout << "Updated GPA: " << A->getGpa() << endl;
    cout << "Age: " << A->getAge() << endl;  // Correct usage

    delete A;  // Free allocated memory
    return 0;
}
