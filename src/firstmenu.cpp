//system libs
#include <iostream>
#include<windows.h>
#include <vector>
#include<windows.h>

//custom libs
#include "mainmenu.h"
#include "logo.h"
#include"addstudents.h"
#include"removestudents.h"
#include "students.h" 
#include "viewstudents.h"
#include "modifystudent.h"
#include "gradesubmit.h"
#include "secondarymenu.h"
#include "Animations.h"


using namespace std;

//defines
#define LIGHT_PURPLE (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY)
#define LIGHT_BLUE  (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY)




//first menu function
void firstmenu(){
   
   
   
     int choice;
	do{
		system("cls");
	
     //first menu options
     setConsoleColor(LIGHT_PURPLE);
	cout<<"---------------\n";
	cout<<"| ";setConsoleColor(LIGHT_BLUE);cout<<"[+]Options: ";setConsoleColor(LIGHT_PURPLE);cout<<"|\n";
    cout<<"---------------\n\n";
    
    cout<<"--------------------\n";
	cout<<"| ";setConsoleColor(LIGHT_BLUE);cout<<"1. Add Student   ";setConsoleColor(LIGHT_PURPLE);cout<<"|\n";
	cout<<"--------------------\n";
	cout<<"| ";setConsoleColor(LIGHT_BLUE);cout<<"2. Remove Student";setConsoleColor(LIGHT_PURPLE);cout<<"|\n";
	cout<<"--------------------\n";
	cout<<"| ";setConsoleColor(LIGHT_BLUE);cout<<"3. Modify Student";setConsoleColor(LIGHT_PURPLE);cout<<"|\n";
	cout<<"--------------------\n";
	cout<<"| ";setConsoleColor(LIGHT_BLUE);cout<<"4. View Students ";setConsoleColor(LIGHT_PURPLE);cout<<"|\n";
	cout<<"--------------------\n";
	cout<<"| ";setConsoleColor(LIGHT_BLUE);cout<<"5. Grades        ";setConsoleColor(LIGHT_PURPLE);cout<<"|\n";
	cout<<"--------------------\n";
	cout<<"| ";setConsoleColor(LIGHT_BLUE);cout<<"7. Exit programm ";setConsoleColor(LIGHT_PURPLE);cout<<"|\n";
	cout<<"--------------------\n\n>";
	
	
	setConsoleColor(LIGHT_BLUE);
	cin>>choice;
	
    //first menu logic and functionality
    
    if(choice==1){
    	addstudents();//function that adds students
	}
	else if(choice==2){
	     removestudents();//function that removes students
	}
	else if(choice==3){
		modifystudents();//function that modifies student info
	}
	else if (choice==4){
		viewstudents();//function that views whole student list with their info
		
	}
    else if(choice==5){
    	submitgrades();//grade submiting function
	}
}while(choice!=7);
system("cls");
}
	
