#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;
    double averageGrade;

public:
    Student(string n, int a, double avg) : name(n), age(a), averageGrade(avg) {}

    string GetName() const { return name; }
    int GetAge() const { return age; }
    double GetAverageGrade() const { return averageGrade; }

    void SetAverageGrade(double newGrade) {
        if (newGrade >= 0.0 && newGrade <= 10.0) {
            averageGrade = newGrade;
        }
        else {
            cout << "Error: Grade must be in the range from 0 to 10." << endl;
        }
    }

    void Print() const {
        cout << "Student: " << name
            << ", Age: " << age
            << ", Average grade: " << averageGrade << endl;
    }
};

int main() {
    Student student1("Ivan", 20, 8.5);
    student1.Print();

    cout << "Changing grade to 9.5..." << endl;
    student1.SetAverageGrade(9.5);
    student1.Print();

    cout << "Trying to set 12..." << endl;
    student1.SetAverageGrade(12.0);

    return 0;
}