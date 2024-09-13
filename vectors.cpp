#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    string name;
    vector<int> marks;

    void inputMarks(int numSubjects) {
        cout << "Enter marks for " << name << ":\n";
        for (int i = 0; i < numSubjects; ++i) {
            int mark;
            cout << "Subject " << i + 1 << ": ";
            cin >> mark;
            marks.push_back(mark);
        }
    }

    void displayMarks() {
        cout << "Marks for " << name << ":\n";
        for (int i = 0; i < marks.size(); ++i) {
            cout << "Subject " << i + 1 << ": " << marks[i] << endl;
        }
    }
};

int main() {
    int numStudents, numSubjects;
    cout << "Enter number of students: ";
    cin >> numStudents;
    cout << "Enter number of subjects: ";
    cin >> numSubjects;

    vector<Student> students(numStudents);

    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> students[i].name;
        students[i].inputMarks(numSubjects);
    }

    for (int i = 0; i < numStudents; ++i) {
        students[i].displayMarks();
    }

    return 0;
}
