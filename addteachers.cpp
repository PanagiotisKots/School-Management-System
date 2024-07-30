//system liobraries
#include <iostream>
#include <vector>
#include <string>

//custom libr5aries
#include "addteachers.h"
#include "teachers.h" 
#include "Animations.h"

// Storing
std::vector<Teacher> teachers;

#define LIGHT_PURPLE (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY)
#define LIGHT_BLUE  (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY)

using namespace std;

// Add teacher function
void addteachers() {
    int teacherNumber = 1;
    while (true) {
        // Teacher info to be stored in the system
        string firstName, lastName,U_ID,gender,subject,email;
        int age;
        long long int phone_number;
        
        setConsoleColor(LIGHT_BLUE);
        cout << "Enter teacher's first name (type 'quit' to stop): ";
        setConsoleColor(LIGHT_PURPLE);
        cin >> firstName;

        if (firstName == "quit") {
            break;
        }

        setConsoleColor(LIGHT_BLUE);
        cout << "Enter teacher's last name: ";
        setConsoleColor(LIGHT_PURPLE);
        cin >> lastName;
        
        setConsoleColor(LIGHT_BLUE);
        cout<<"Enter teacher's UID: ";
        setConsoleColor(LIGHT_PURPLE);
        cin>>U_ID;

        setConsoleColor(LIGHT_BLUE);
        cout << "Enter teacher's age: ";
        setConsoleColor(LIGHT_PURPLE);
        cin >> age;

        setConsoleColor(LIGHT_BLUE);
        cout<<"Enter teacher's gender: ";
        setConsoleColor(LIGHT_PURPLE);
        cin>>gender;
        
        setConsoleColor(LIGHT_BLUE);
        cout<<"Enter teachers subject: ";
        setConsoleColor(LIGHT_PURPLE);
        cin>>subject;
        
        setConsoleColor(LIGHT_BLUE);
        cout<<"Enter teachers email: ";
        setConsoleColor(LIGHT_PURPLE);
        cin>>email;
        
        setConsoleColor(LIGHT_BLUE);
        cout<<"Enter teacher's phone_number: ";
        setConsoleColor(LIGHT_PURPLE);
        cin>>phone_number;
        cout<<endl<<endl;
        
        // Store them in the vector
        teachers.push_back({firstName, lastName, U_ID, age, gender, subject, email,phone_number});

        setConsoleColor(LIGHT_BLUE);
        cout << "Teacher " << teacherNumber << ": " << firstName << "  " << lastName << "   UID: "<<U_ID<<"   Age: " << age <<  
		      " "<<" Gender: "<<gender<<" "<<"  Subject: "<<subject<< " "<<"  email: "<<email<<" "<<"  phone  number:  "<<phone_number<<endl;

        teacherNumber++;
    }

     setConsoleColor(LIGHT_PURPLE);
    // Display stored teacher list
    cout << "\nList of stoed Teachers :\n";
    setConsoleColor(LIGHT_BLUE);
    for (int i = 0; i < teachers.size(); ++i) {
        cout << i + 1 << ". " << "[" << teachers[i].firstName << "] " << "[" << teachers[i].lastName << "]   Age: [" << teachers[i].age << "] "<<"  UID: ["<<teachers[i].U_ID <<"] "<< 
		"  Gender: ["<<teachers[i].gender<< "]   Subject: ["<<teachers[i].subject << "]   email: ["<<teachers[i].email<<"]   phone number: ["<<teachers[i].phone_number<<"]"<<endl << endl;
    }
}





