//system libs
#include <iostream>
#include <vector>
#include <string>

//custom libraries
#include "teachers.h"
#include "Animations.h"

using namespace std;

#define LIGHT_PURPLE (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY)
#define LIGHT_BLUE  (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY)

void viewteachers() {
    // Display stored teacher list + age included next to it
	
	setConsoleColor(LIGHT_BLUE);
    cout << "\nFull teacher list:\n";
    for (int i = 0; i < teachers.size(); ++i) {
        cout << i + 1 << ". " << "[" ;setConsoleColor(LIGHT_PURPLE);cout<< teachers[i].firstName;setConsoleColor(LIGHT_BLUE);cout << "] " << "[" ;setConsoleColor(LIGHT_PURPLE);cout<< teachers[i].lastName;setConsoleColor(LIGHT_BLUE);cout << "] "<<"  UID: ";setConsoleColor(LIGHT_PURPLE);cout<<teachers[i].U_ID;

        // Print age for the teacher
        cout << "   Age: ";setConsoleColor(LIGHT_PURPLE);cout<< teachers[i].age;setConsoleColor(LIGHT_BLUE);cout<<"   Gender: [";setConsoleColor(LIGHT_PURPLE);cout<<teachers[i].gender;setConsoleColor(LIGHT_BLUE);cout<<"]  "<<"  Subject: [";setConsoleColor(LIGHT_PURPLE);cout<<teachers[i].subject;setConsoleColor(LIGHT_BLUE);cout<<"] "<<"   email: ";setConsoleColor(LIGHT_PURPLE);cout<<teachers[i].email;setConsoleColor(LIGHT_BLUE);cout<<"] "<<"   phone: [";setConsoleColor(LIGHT_PURPLE);cout<<teachers[i].phone_number;setConsoleColor(LIGHT_BLUE);cout<<"]";

        cout << endl << endl;
    }
}


