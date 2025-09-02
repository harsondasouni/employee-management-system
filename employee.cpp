#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    string position;
    float salary;
};

int main() {
    Employee employees[100];
    int count = 0, choice, id;
    do {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1) {
            cout << "Enter Employee ID: ";
            cin >> employees[count].id;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, employees[count].name);
            cout << "Enter Position: ";
            getline(cin, employees[count].position);
            cout << "Enter Salary: ";
            cin >> employees[count].salary;
            count++;
            cout << "Employee added successfully!\n";
        } else if (choice == 2) {
            if (count == 0) {
                cout << "No employees found.\n";
            } else {
                cout << "\n--- Employee List ---\n";
                for (int i = 0; i < count; i++) {
                    cout << "ID: " << employees[i].id
                         << " | Name: " << employees[i].name
                         << " | Position: " << employees[i].position
                         << " | Salary: " << employees[i].salary << endl;
                }
            }
        } else if (choice == 3) {
            cout << "Enter Employee ID to search: ";
            cin >> id;
            bool found = false;
            for (int i = 0; i < count; i++) {
                if (employees[i].id == id) {
                    cout << "\nEmployee Found!\n";
                    cout << "ID: " << employees[i].id
                         << " | Name: " << employees[i].name
                         << " | Position: " << employees[i].position
                         << " | Salary: " << employees[i].salary << endl;
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Employee with ID " << id << " not found.\n";
        } else if (choice == 4) {
            cout << "Exiting program...\n";
        } else {
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);
    return 0;
}
