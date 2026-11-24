#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string fullName;
    int id;
    float grade;

    // Accept student data
    cout << "Enter Student Full Name: ";
    getline(cin, fullName);

    cout << "Enter Student ID: ";
    cin >> id;

    cout << "Enter Student Grade: ";
    cin >> grade;

    // Create a text file
    ofstream file("Student.txt");

    // Check if file opened successfully
    if (file.is_open())
    {
        file << "Student Full Name: " << fullName << endl;
        file << "Student ID: " << id << endl;
        file << "Student Grade: " << grade << endl;

        file.close();

        cout << "\nStudent data saved successfully in Student.txt" << endl;
    }
    else
    {
        cout << "Error: Cannot create the file!" << endl;
    }

    return 0;
}