//system libs
#include <iostream>
#include <windows.h>

//custom libraries
#include"teachers.h"
#include "addteachers.h"
#include "removeteachers.h"
#include "modifyteachers.h"
#include"viewteachers.h"
#include "Animations.h"

using namespace std;

//defines
#define LIGHT_PURPLE (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY)
#define LIGHT_BLUE  (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY)





//secondary menu function
void secondarymenu(){
	
	int choice;
	
	do{
		
		  setConsoleColor(LIGHT_PURPLE);
	cout<<"---------------\n";
	cout<<"| ";setConsoleColor(LIGHT_BLUE);cout<<"[+]Options: ";setConsoleColor(LIGHT_PURPLE);cout<<"|\n";
    cout<<"---------------\n\n";
    
    
	// menu options(for teachers
	cout<<"--------------------\n";
	cout<<"| ";setConsoleColor(LIGHT_BLUE);cout<<"1. Add Teacher   ";setConsoleColor(LIGHT_PURPLE);cout<<"|\n";
	cout<<"--------------------\n";
	cout<<"| ";setConsoleColor(LIGHT_BLUE);cout<<"2. Remove Teacher";setConsoleColor(LIGHT_PURPLE);cout<<"|\n";
	cout<<"--------------------\n";
	cout<<"| ";setConsoleColor(LIGHT_BLUE);cout<<"3. Modify Teacher";setConsoleColor(LIGHT_PURPLE);cout<<"|\n";
	cout<<"--------------------\n";
	cout<<"| ";setConsoleColor(LIGHT_BLUE);cout<<"4. View Teachers ";setConsoleColor(LIGHT_PURPLE);cout<<"|\n";
	cout<<"--------------------\n";
	cout<<"| ";setConsoleColor(LIGHT_BLUE);cout<<"5. Exit          ";setConsoleColor(LIGHT_PURPLE);cout<<"|\n";
	cout<<"--------------------\n\n>";
	
	
	setConsoleColor(LIGHT_BLUE);
	cin>>choice;
	
	//functionality after user choice input
	if(choice==1){
		addteachers();
	}
		if(choice==2){
		removeteachers();
	}
	if(choice==3){
		modifyteachers();
	}
	if(choice==4){
	viewteachers();
	}
}while(choice!=5);//if user choice = 5 exit function
system("cls"); // clearing console scrreen 
}


