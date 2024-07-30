//system libs
#include <iostream>
#include <vector>
#include <string>

//custom libs
#include"addstudents.h"
#include "students.h" 
#include "Animations.h"

//defines
#define LIGHT_PURPLE (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY)
#define LIGHT_BLUE  (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY)



using namespace std;

vector<Student> students;

void addstudents() {
    int studentNumber = 1;

    while (true) {
        // Student info to be stored in the system
        string firstName, lastName, UID, gender, address, ethnicity, date_of_birth;
        
        
        setConsoleColor(LIGHT_BLUE);
        cout << "Enter student's first name (type ";setConsoleColor(LIGHT_PURPLE);cout<<"'quit'";setConsoleColor(LIGHT_BLUE);cout<<" to stop): \n";setConsoleColor(LIGHT_BLUE);cout<<">";
        
        setConsoleColor(LIGHT_PURPLE);
		cin >> firstName;
        

        if (firstName == "quit") {
            break;
        }


 setConsoleColor(LIGHT_BLUE);
        cout << "Enter student's last name: ";
        
         setConsoleColor(LIGHT_PURPLE);
        cin >> lastName;

 setConsoleColor(LIGHT_BLUE);
        cout << "Enter student's UID: ";
         setConsoleColor(LIGHT_PURPLE);
        cin >> UID;

 setConsoleColor(LIGHT_BLUE);
        cout << "Enter student's gender: ";
               setConsoleColor(LIGHT_PURPLE);
        cin >> gender;

        cin.ignore(); // Ignore the newline character left in the input buffer


 setConsoleColor(LIGHT_BLUE);
        cout << "Enter student's address: ";
         setConsoleColor(LIGHT_PURPLE);
        getline(cin, address);


 setConsoleColor(LIGHT_BLUE);
        cout << "Enter student's ethnicity: ";
         setConsoleColor(LIGHT_PURPLE);
        getline(cin, ethnicity);

 setConsoleColor(LIGHT_BLUE);
        cout << "Enter date of birth (MM/DD/YYYY): ";
        setConsoleColor(LIGHT_PURPLE);
        cin >> date_of_birth;
        
        
         setConsoleColor(LIGHT_BLUE);
        char p;  
        cout << "Do you want to add something to the student's disciplinary record? Y/N: ";
        setConsoleColor(LIGHT_PURPLE);
		cin >> p;
        
        Disciplinary_Record disciplinaryRecord; 

        if (p == 'Y') {
            int choice;
            
            cout << "--------------------\n";
            cout << "| 1. Add award:    |\n";
            cout << "--------------------\n";
            cout << "| 2. Add Actions:  |\n";
            cout << "--------------------\n";
            cout << "| 3. Add incidents:|\n";
            cout << "--------------------\n";
            cin >> choice;
        
            switch (choice) {
            case 1:
            	setConsoleColor(LIGHT_BLUE);
                cout << "Enter student's award (type 0 if none): ";
                setConsoleColor(LIGHT_PURPLE);
                cin >> disciplinaryRecord.awards;
                break;
            case 2:
            	setConsoleColor(LIGHT_BLUE);
                cout << "Enter students Actions (type 0 if none): ";
                setConsoleColor(LIGHT_PURPLE);
                cin >> disciplinaryRecord.actions;
                break;
            case 3:
            	setConsoleColor(LIGHT_BLUE);
                cout << "Enter student's incidents(type 0 if none): ";
                setConsoleColor(LIGHT_PURPLE);
                cin >> disciplinaryRecord.incidents;
                break;
            }
        }

        // Create a Student object and store the information
        Student newStudent;
        newStudent.firstName = firstName;
        newStudent.lastName = lastName;
        newStudent.UID = UID;
        newStudent.gender = gender;
        newStudent.address = address;
        newStudent.ethnicity = ethnicity;
        newStudent.date_of_birth = date_of_birth;
        newStudent.disciplinaryRecord = disciplinaryRecord; // Assign the disciplinary record
        
        // Store the student in the vector
        students.push_back(newStudent);

        char pp;
        cout<<"\n\nDo you wish to display current student Folder:( Y / N )? ";
        cin>>p;
        
        if (pp=='Y'){
		
        // Display the added award for the current student
        cout << "Student " << firstName << " " << lastName << " has the following award: " << disciplinaryRecord.awards << endl;
        cout << "Student " << firstName << " " << lastName << " has the following actions: " << disciplinaryRecord.actions << endl;
        cout << "Student " << firstName << " " << lastName << " has the following incidents: " << disciplinaryRecord.incidents << endl;
        
        cout << "Student " << studentNumber << ": " << firstName << " " << lastName << " UID: " << UID << " Gender: " << gender << " Address: " << address << 
        " Ethnicity: " << ethnicity << " Date of Birth: " << date_of_birth << " added." << endl;
    }else{
    	
	}
        studentNumber++;
    }

     
    // Display stored students list
    setConsoleColor(LIGHT_PURPLE);
    cout << "-----------------------------";
    setConsoleColor(LIGHT_BLUE);
    cout << "\nList of stored students:\n";
     setConsoleColor(LIGHT_PURPLE);
    cout << "-----------------------------";
    for (int i = 0; i < students.size(); ++i) {
        cout << i + 1 << ". " << "[" << students[i].firstName << " " << students[i].lastName << "] " << "UID: " << students[i].UID << " Gender: " << 
        students[i].gender << " Address: " << students[i].address << " Ethnicity: " << students[i].ethnicity << " Date of Birth: " << students[i].date_of_birth << endl;
    }
    
}

