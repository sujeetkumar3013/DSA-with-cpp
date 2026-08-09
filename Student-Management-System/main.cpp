#include <iostream>
#include <string>
#include <fstream>
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

// Save students to file
void saveStudents(Student s[], int studentCount)
{
    ofstream file("students.txt");

    if (!file)
    {
        cout << "Error: Could not open students.txt for saving!\n";
        return;
    }

    for (int i = 0; i < studentCount; i++)
    {
        file << s[i].name << " "
             << s[i].roll << " "
             << s[i].marks << endl;
    }

    file.close();
}

// Load students from file
void loadStudents(Student s[], int &studentCount)
{
    ifstream file("students.txt");

    if (!file)
    {
        return;
    }

    while (studentCount < 100 &&
           file >> s[studentCount].name
                >> s[studentCount].roll
                >> s[studentCount].marks)
    {
        studentCount++;
    }

    file.close();
}

int main()
{
    Student s[100];
    int studentCount = 0;
    int choice;

    // Load saved students when program starts
    loadStudents(s, studentCount);

    do
    {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Show Students\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Update Student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (studentCount >= 100)
            {
                cout << "Student limit reached!\n";
                break;
            }

            s[studentCount].addStudent();
            studentCount++;

            saveStudents(s, studentCount);

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
            {
                cout << "Student Not Found!\n";
            }

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

                    saveStudents(s, studentCount);

                    cout << "Student Deleted Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Student Not Found!\n";
            }

            break;
        }

        case 5:
        {
            int updateRoll;
            bool found = false;

            cout << "Enter Roll Number to Update: ";
            cin >> updateRoll;

            for (int i = 0; i < studentCount; i++)
            {
                if (s[i].roll == updateRoll)
                {
                    cout << "Enter New Student Name: ";
                    cin >> s[i].name;

                    cout << "Enter New Marks: ";
                    cin >> s[i].marks;

                    saveStudents(s, studentCount);

                    cout << "Student Updated Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Student Not Found!\n";
            }

            break;
        }

        case 6:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}