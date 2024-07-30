//system libs
#include <iostream>
#include <vector>
#include <string>

//custom libs
#include "students.h" // Include the header file for the Student struct and students vector
#include "Animations.h"


#define LIGHT_PURPLE (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY)
#define LIGHT_BLUE  (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY)



using namespace std;

// Function to remove a student
void removestudents() {
    string firstName, lastName;
    setConsoleColor(LIGHT_BLUE);
    cout << "Enter the first name of the student to remove: ";
    setConsoleColor(LIGHT_PURPLE);
    cin >> firstName; // Get the first name of the student to remove
    setConsoleColor(LIGHT_BLUE);
    cout << "Enter the last name of the student to remove: ";
        setConsoleColor(LIGHT_PURPLE);
    cin >> lastName; // Get the last name of the student to remove

    bool found = false; // Flag to indicate if the student is found
    for (auto it = students.begin(); it != students.end(); ++it) { // Iterate through the students vector
        if (it->firstName == firstName && it->lastName == lastName) { // Check if current student matches the input first and last name
            it = students.erase(it); // Remove the student if found
            found = true; // Set found flag to true
            setConsoleColor(LIGHT_BLUE);
            cout << "Student '";setConsoleColor(LIGHT_PURPLE);cout << firstName << " " << lastName;setConsoleColor(LIGHT_BLUE);cout << "' removed." << endl; // Print message indicating student removed
            break; // Exit loop after removing the student
        }
    }

setConsoleColor(LIGHT_BLUE);
    if (!found) { // If student not found
        cout << "Student '";setConsoleColor(LIGHT_PURPLE);cout << firstName << " " << lastName;setConsoleColor(LIGHT_BLUE);cout << "' not found." << endl; // Print message indicating student not found
    }
    
    cout<<"\n\nPress Enter to continue: ";
    getchar();
    while(getchar()!='\n'){
	}
}

