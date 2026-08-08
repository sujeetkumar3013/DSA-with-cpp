#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    float marks;

    void addStudent()
    {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void showStudent()
    {
        cout << "\nName : " << name << endl;
        cout << "Roll No : " << roll << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main()
{
    Student s[100];
    int studentCount = 0;
    int choice;

    do
    {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Show Students\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            s[studentCount].addStudent();
            studentCount++;
            cout << "Student Added Successfully!\n";
            break;

        case 2:
            if (studentCount == 0)
            {
                cout << "No Students Found!\n";
            }
            else
            {
                for (int i = 0; i < studentCount; i++)
                {
                    s[i].showStudent();
                }
            }
            break;

        case 3:
        {
            int searchRoll;
            bool found = false;

            cout << "Enter Roll Number: ";
            cin >> searchRoll;

            for (int i = 0; i < studentCount; i++)
            {
                if (s[i].roll == searchRoll)
                {
                    cout << "\nStudent Found\n";
                    s[i].showStudent();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student Not Found!\n";

            break;
        }

        case 4:
        {
            int deleteRoll;
            bool found = false;

            cout << "Enter Roll Number to Delete: ";
            cin >> deleteRoll;

            for (int i = 0; i < studentCount; i++)
            {
                if (s[i].roll == deleteRoll)
                {
                    for (int j = i; j < studentCount - 1; j++)
                    {
                        s[j] = s[j + 1];
                    }

                    studentCount--;
                    found = true;
                    cout << "Student Deleted Successfully!\n";
                    break;
                }
            }

            if (!found)
                cout << "Student Not Found!\n";

            break;
        }

        case 5:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}