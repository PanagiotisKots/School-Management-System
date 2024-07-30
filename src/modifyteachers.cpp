//systyem libs
#include <iostream>
#include <vector>
#include <string>

//custom libs
#include "teachers.h" 
#include "Animations.h"




#define LIGHT_PURPLE (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY)
#define LIGHT_BLUE  (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY)



using namespace std;

void modifyteachers() {
	
	//add system cls to all these commands for bette visibility
	
	
	
    string firstName, lastName;
    setConsoleColor(LIGHT_BLUE);
    cout << "Enter the first name of the teacher to modify: ";
    setConsoleColor(LIGHT_PURPLE);
    cin >> firstName; // Get the first name of the teacher to modify
    setConsoleColor(LIGHT_BLUE);
    cout << "Enter the last name of the teacher to modify: ";
    setConsoleColor(LIGHT_PURPLE);
    cin >> lastName; // Get the last name of the teacher to modify

    bool found = false; // Flag to indicate if the teacher is found
    for (auto it = teachers.begin(); it != teachers.end(); ++it) { // Iterate through the teachers vector
        if (it->firstName == firstName && it->lastName == lastName) { // Check if current teacher matches the input first and last name
            found = true;
            setConsoleColor(LIGHT_BLUE);
            cout << "Teacher found! What credentials do you wish to change?" << endl;
            
            setConsoleColor(LIGHT_PURPLE);
            cout << "------------------\n";
            setConsoleColor(LIGHT_BLUE);
            cout << "| 1. First Name  |" << endl;
            setConsoleColor(LIGHT_PURPLE);
            cout << "------------------\n";
            setConsoleColor(LIGHT_BLUE);
            cout << "| 2. Last Name   |" << endl;
            setConsoleColor(LIGHT_PURPLE);
            cout << "------------------\n";
            setConsoleColor(LIGHT_BLUE);
            cout << "| 3. User ID     |" << endl;
            setConsoleColor(LIGHT_PURPLE);
            cout << "------------------\n";
            setConsoleColor(LIGHT_BLUE);
            cout << "| 4. Gender      |" << endl;
            setConsoleColor(LIGHT_PURPLE);
            cout << "------------------\n";
            setConsoleColor(LIGHT_BLUE);
            cout << "| 5. Subject     |" << endl;
            setConsoleColor(LIGHT_PURPLE);
            cout << "------------------\n";
            setConsoleColor(LIGHT_BLUE);
            cout << "| 6. Email       |" << endl;
            setConsoleColor(LIGHT_PURPLE);
            cout << "------------------\n";
            setConsoleColor(LIGHT_BLUE);
            cout << "| 7. Phone Number|" << endl;
            setConsoleColor(LIGHT_PURPLE);
            cout << "------------------\n\n";
            setConsoleColor(LIGHT_BLUE);
            cout << "Enter the number corresponding to the credential you want to change: ";
            
            int choice;
            setConsoleColor(LIGHT_PURPLE);
            cin >> choice;
            switch(choice) {
                case 1:
                	setConsoleColor(LIGHT_BLUE);
                    cout << "Enter new first name: ";
                    setConsoleColor(LIGHT_PURPLE);
                    cin >> it->firstName; // Modify the first name of the teacher
                    break;
                case 2:
                	setConsoleColor(LIGHT_BLUE);
                    cout << "Enter new last name: ";
                    setConsoleColor(LIGHT_PURPLE);
                    cin >> it->lastName; // Modify the last name of the teacher
                    break;
                case 3:
                	setConsoleColor(LIGHT_BLUE);
                    cout << "Enter new User ID: ";
                    setConsoleColor(LIGHT_PURPLE);
                    cin >> it->U_ID; // Modify the User ID of the teacher
                    break;
                case 4:
                	setConsoleColor(LIGHT_BLUE);
                    cout << "Enter new gender: ";
                    setConsoleColor(LIGHT_PURPLE);
					cin >> it->gender; // Modify the gender of the teacher
                    break;
                case 5:
                	setConsoleColor(LIGHT_BLUE);
                    cout << "Enter new subject: ";
                    setConsoleColor(LIGHT_PURPLE);
                    cin >> it->subject; // Modify the subject of the teacher
                    break;
                case 6:
                	setConsoleColor(LIGHT_BLUE);
                    cout << "Enter new email: ";
                    setConsoleColor(LIGHT_PURPLE);
                    cin >> it->email; // Modify the email of the teacher
                    break;
                case 7:
                	setConsoleColor(LIGHT_BLUE);
                    cout << "Enter new phone number: ";
                    setConsoleColor(LIGHT_PURPLE);
                    cin >> it->phone_number; // Modify the phone number of the teacher
                    break;
                default:
                    cout << "Invalid choice" << endl;
                    break;
            }
            setConsoleColor(LIGHT_BLUE);
            cout << "Teacher credentials modified ";setConsoleColor(FOREGROUND_GREEN | FOREGROUND_INTENSITY);cout<<"successfully." << endl;
            break; // Exit the loop after modifying the teacher
        }
    }

    if (!found) {
    	setConsoleColor(FOREGROUND_RED);
        cout << "Teacher not found." << endl;
    }
}

