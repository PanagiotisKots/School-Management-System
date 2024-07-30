//system libs
#include <iostream>
#include <vector>
#include <string>

//custom libs
#include "students.h" 
#include "Animations.h"

using namespace std;

#define LIGHT_PURPLE (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY)
#define LIGHT_BLUE  (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY)

//function for grade submiting for each student
void submitgrades() {
    string firstName, lastName, grade;

setConsoleColor(LIGHT_BLUE);
    cout << "Enter the first name of the student to submit grade: ";
    setConsoleColor(LIGHT_PURPLE);
    cin >> firstName; // Get the first name of the student to submit grade
    setConsoleColor(LIGHT_BLUE);
    cout << "Enter the last name of the student to submit grade: ";
    setConsoleColor(LIGHT_PURPLE);
    cin >> lastName; // Get the last name of the student to submit grade

    bool found = false; // Flag to indicate if the student is found
    for (auto it = students.begin(); it != students.end(); ++it) { // Iterate through the students vector
        if (it->firstName == firstName && it->lastName == lastName) { // Check if current student matches the input first and last name
            found = true;

            setConsoleColor(LIGHT_BLUE);
            cout << "Enter the grade for ";setConsoleColor(LIGHT_PURPLE);cout << firstName << " " << lastName ;setConsoleColor(LIGHT_BLUE);cout<< ": ";
            setConsoleColor(LIGHT_PURPLE);
            cin >> grade; // Get the grade for the student
            it->grade = grade; // Update the grade for the student
            setConsoleColor(LIGHT_BLUE);
            cout << "Grade submitted";setConsoleColor(FOREGROUND_GREEN | FOREGROUND_INTENSITY);cout<<"successfully for ";setConsoleColor(LIGHT_PURPLE);cout << firstName << " " << lastName << "." << endl;
            break; // Exit the loop after submitting the grade
        }
    }

    if (!found) {
        cout << "Student not found." << endl;
    }
}








