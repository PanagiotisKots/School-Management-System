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



//function for student credentials and info modification
void modifystudents() {
	
    string firstName, lastName;

setConsoleColor(LIGHT_PURPLE);
    cout << "Enter the first name of the student to modify: ";
    setConsoleColor(LIGHT_BLUE);
    cin >> firstName; // Get the first name of the student to modify
    setConsoleColor(LIGHT_PURPLE);
    cout << "Enter the last name of the student to modify: ";
    setConsoleColor(LIGHT_BLUE);
    cin >> lastName; // Get the last name of the student to modify

    bool found = false; // Flag to indicate if the student is found
    for (auto it = students.begin(); it != students.end(); ++it) { // Iterate through the students vector
        if (it->firstName == firstName && it->lastName == lastName) { // Check if current student matches the input first and last name
            found = true;
            setConsoleColor(LIGHT_PURPLE);
            cout << "Student found! ";setConsoleColor(LIGHT_BLUE);cout<<"Enter new first name: ";
            setConsoleColor(LIGHT_PURPLE);
            cin >> it->firstName; // Modify the first name of the student
            setConsoleColor(LIGHT_BLUE);
            cout << "Enter new last name: ";
            setConsoleColor(LIGHT_PURPLE);
            cin >> it->lastName; // Modify the last name of the student
            setConsoleColor(LIGHT_BLUE);
            cout << "Student credentials modified ";setConsoleColor(FOREGROUND_GREEN | FOREGROUND_INTENSITY);cout<<"successfully." << endl;
            break; // Exit the loop after modifying the student
        }
    }

    if (!found) {
        cout << "Student not found." << endl;
    }
    
    cout<<"\n\nPress enter to continue: ";
    getchar();
    while(getchar()!='\n'){
	}
}










