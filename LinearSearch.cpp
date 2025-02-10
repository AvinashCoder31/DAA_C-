#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNumber;
    string name;
    int age;
};

void searchStudent(Student students[], int n, string targetName) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (students[i].name == targetName) {
            found = true;
            cout << "\nStudent Found:\n";
            cout << "Roll Number: " << students[i].rollNumber << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Age: " << students[i].age << endl;
            break;
        }
    }
    if (!found) {
        cout << "\nStudent not found!\n";
    }
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore(); // To handle newline character
    
    Student students[n];
    
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Student " << i + 1 << ":\n";
        cout << "Roll Number: ";
        cin >> students[i].rollNumber;
        cin.ignore();
        cout << "Name: ";
        getline(cin, students[i].name);
        cout << "Age: ";
        cin >> students[i].age;
        cin.ignore();
    }
    
    string target;
    cout << "\nEnter student name to search: ";
    getline(cin, target);
    
    searchStudent(students, n, target);
    
    return 0;
}
