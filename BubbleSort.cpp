#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    int day, month, year; // Date of Birth (DOB)
};

void bubbleSort(Employee arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare year first, then month, then day
            if (arr[j].year > arr[j + 1].year ||
                (arr[j].year == arr[j + 1].year && arr[j].month > arr[j + 1].month) ||
                (arr[j].year == arr[j + 1].year && arr[j].month == arr[j + 1].month && arr[j].day > arr[j + 1].day)) {
                // Swap employees
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printEmployees(Employee arr[], int n) {
    cout << "\nSorted Employee List (by Date of Birth):\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i].name << " - DOB: " << arr[i].day << "/" << arr[i].month << "/" << arr[i].year << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    Employee employees[n];
    
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Employee " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> employees[i].name;
        cout << "Day of Birth: ";
        cin >> employees[i].day;
        cout << "Month of Birth: ";
        cin >> employees[i].month;
        cout << "Year of Birth: ";
        cin >> employees[i].year;
    }
    
    bubbleSort(employees, n);
    printEmployees(employees, n);
    
    return 0;
}
