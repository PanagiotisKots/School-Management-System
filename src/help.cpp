//system libs
#include <iostream>
#include<windows.h>
#include<stdio.h>
#include<thread>
#include <chrono>

//custom libs
#include "logo.h" 
#include "mainmenu.h" 
#include "help.h"
#include "Animations.h"

#define LIGHT_PURPLE (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY)
#define LIGHT_BLUE  (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY)




//function that prints text with delay 
void printWithDelay(const string& text) {
    for (char letter : text) {
        cout << letter;
        cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(5));
    }
    cout << endl;
}


//containing the user helping message
void userhelp(){
	
	
	setConsoleColor(LIGHT_BLUE);
    printWithDelay("SchoolMaster, our innovative school management program, offers a comprehensive and efficient solution for managing both\nstudents and teachers within educational institutions");
    printWithDelay("\nWith features to add, remove, modify, and view student and teacher information, along with the capability to manage ");
    printWithDelay("\nstudent grades, SchoolMaster simplifies administrative tasks and enhances productivity. Its uniqueness lies in its user-friendly interface ");
    printWithDelay("\nand the seamless integration of essential functionalities, making it an indispensable tool for school administrators ");
    printWithDelay("\nseeking to streamline operations and enhance overall efficiency.\n\n\n");
    printWithDelay("=> Usage: school_management_system [option]\n\n\n");
    printWithDelay("=> Options:\n\n[+] Students:");
    printWithDelay("\n\nAdd Student:   Add a new student to the system.\nRemove Student:   Remove a student from the system.\nModify Student:   Modify details of a student.\nView Students:   View list of all students.\nGrades:   View or manage student grades.");
    printWithDelay("\n\n=> Teachers:\n\n[+] Add Teacher:   Add a new teacher to the system.\nRemove Teacher:   Remove a teacher from the system.\nModify Teacher:   Modify details of a teacher.\nView Teachers:   View list of all teachers.");
    printWithDelay("\n\nExit:\n\nexiting program!!!");
	
}



//help about programm function
void helpaboutprogram() {
	
    string choice;
    
    setConsoleColor(LIGHT_PURPLE);
    cout<<"-----------------------      -----------------------\n";
    cout<<"| ";setConsoleColor(LIGHT_BLUE);cout<<"-help               ";setConsoleColor(LIGHT_PURPLE);cout<<"| -or- | ";setConsoleColor(LIGHT_BLUE);cout<<"-main               ";setConsoleColor(LIGHT_PURPLE);cout<<"|\n";
    cout<<"-----------------------      -----------------------\n";
    cout<<"| ";setConsoleColor(LIGHT_BLUE);cout<<"help about the      ";setConsoleColor(LIGHT_PURPLE);cout<<"| -or- | ";setConsoleColor(LIGHT_BLUE);cout<<"to navigate to      ";setConsoleColor(LIGHT_PURPLE);cout<<"|\n";
	cout<<"| ";setConsoleColor(LIGHT_BLUE);cout<<"program usage       ";setConsoleColor(LIGHT_PURPLE);cout<<"|      | ";setConsoleColor(LIGHT_BLUE);cout<<"the menu            ";setConsoleColor(LIGHT_PURPLE);cout<<"|\n";
    cout<<"-----------------------      -----------------------\n\n";
    
	cout << "(type <";setConsoleColor(LIGHT_BLUE);cout<<"Exit";setConsoleColor(LIGHT_PURPLE);cout<<"> to exit program):\n";setConsoleColor(LIGHT_PURPLE);cout<<">";

//loop untill user enters -main or -help, also avoiding crashes from wrong user inputs    
do {
	
	setConsoleColor(LIGHT_BLUE);
    cin >> choice;
    cout<<"Invalid Choice(!)"<<endl;
    
} while(choice != "-help" && choice != "-main" && choice != "exit");

     //options
    if (choice == "-help") {
    	system("cls");
        userhelp();
        cout << "\n\n\nPress 'exit' to return to homepage\n";

        // Keep reading input until 'exit' is entered
        while (true) {
            string input;
            cin >> input;
            if (input == "exit") {
            	system("cls");
                logo();
            }
        }
        //display main menu
    } else if (choice == "-main") {
    	system ("cls");
        cout << endl;
        
        mainmenu(); // calling the mainmenu function
        
        system("cls");
        logo();
        
        
    }else if(choice=="Exit"){
    	cout<<"Exiting programm";
    	for(int i=0; i<5; i++){
    		cout<<".";
    		Sleep(300);
		}
    	exit(0);
	}
}


