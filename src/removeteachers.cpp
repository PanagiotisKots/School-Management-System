//system libs
#include <iostream>
#include <vector>
#include <string>

//custom libs
#include "teachers.h"
#include "Animations.h"

using namespace std;

#define LIGHT_PURPLE (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY)
#define LIGHT_BLUE  (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY)




// Function to remove a teacher
void removeteachers() {
	
    string firstName, lastName;
    
    setConsoleColor(LIGHT_BLUE);
    
    cout << "Enter the first name of the teacvher to remove: ";
    setConsoleColor(LIGHT_PURPLE);
    cin >> firstName; // Get the first name of the teacher to remove
    setConsoleColor(LIGHT_BLUE);
    cout << "Enter the last name of the student to remove: ";
    setConsoleColor(LIGHT_PURPLE);
    cin >> lastName; // Get the last name of the teacher to remove

    bool found = false; // Flag to indicate if the teacher is found
    for (auto it = teachers.begin(); it != teachers.end(); ++it) { // Iterate through the teachers vector
        if (it->firstName == firstName && it->lastName == lastName) { // Check if current student matches the input first and last name
            it = teachers.erase(it); // Remove the student if found
            found = true; // Set found flag to true
            setConsoleColor(LIGHT_BLUE);
			cout << "Teacher '" << firstName << " " << lastName << "' removed." << endl; // Print message indicating student removed
            break; // Exit loop after removing the student
        }
    }

    if (!found) { // If student not found
    setConsoleColor(FOREGROUND_RED);
        cout << "Teacher '" << firstName << " " << lastName << "' not found." << endl; // Print message indicating student not found
    }
}

