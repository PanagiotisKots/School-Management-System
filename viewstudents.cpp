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




void displayAllAwards() {
	setConsoleColor(LIGHT_BLUE);
    cout << "Displaying awards for all students:\n";
    for (const auto& student : students) {
        cout << "Student ";setConsoleColor(LIGHT_PURPLE);cout << student.firstName << " " << student.lastName;setConsoleColor(LIGHT_BLUE);cout << " has the following award: ";setConsoleColor(LIGHT_PURPLE); cout<< student.disciplinaryRecord.awards << endl;
    }
}

void displayAllActions(){
	setConsoleColor(LIGHT_BLUE);
	 cout << "Displaying actions for all students:\n";
    for (const auto& student : students) {
        cout << "Student ";setConsoleColor(LIGHT_PURPLE);cout << student.firstName << " " << student.lastName;setConsoleColor(LIGHT_BLUE);cout << " has the following actions: " ;setConsoleColor(LIGHT_PURPLE); cout<< student.disciplinaryRecord.actions << endl;
    }
}
void displayAllIncidents(){
	setConsoleColor(LIGHT_BLUE);
	 cout << "Displaying awards for all students:\n";
    for (const auto& student : students) {
        cout << "Student ";setConsoleColor(LIGHT_PURPLE);cout << student.firstName << " " << student.lastName;setConsoleColor(LIGHT_BLUE);cout << " has the following incidents: ";setConsoleColor(LIGHT_PURPLE); cout<< student.disciplinaryRecord.incidents << endl;
    }
}

void viewstudents() {
    // Display stored students list + ghrade included next to it 
	setConsoleColor(LIGHT_BLUE);
    cout << "\nFull student's list:\n";
    for (int i = 0; i < students.size(); ++i) {
        cout << i + 1 << ". " << "[" << students[i].firstName << "] " << "[" << students[i].lastName << "]"<<" U_ID: "<<students[i].UID;
        if (!students[i].grade.empty()) { // Check if the grade for the student is not empty
            cout << " Grade: " <<"["<< students[i].grade<<"]"; // Print the grade if available
        }
        cout << endl;
    }
    char option;
    setConsoleColor(LIGHT_BLUE);
    cout<<"Do you want to view the whole students disciplanary?: Y/N";
    	setConsoleColor(LIGHT_PURPLE);
    cin>>option;
    
    if(option=='Y'){
    	displayAllAwards();
    	getchar();
    	while(getchar()!='\n'){
		}
    	cout<<"\n\n";
    	displayAllActions();
    	getchar();
    	while(getchar()!='\n'){
		}
    	cout<<"\n\n";
    	displayAllIncidents();
    	getchar();
    	while(getchar()!='\n'){
		}
	}
	
	else{
		
	}
}


