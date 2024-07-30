//standard libs
#include <iostream>
#include <vector>
#include <windows.h>
#include <iomanip> // For std::setprecision
#include <string>
#include <fstream>

//custom libs
#include "mainmenu.h"
#include "logo.h"
#include "addstudents.h"
#include "removestudents.h"
#include "students.h" // Include the header file for the Student struct
#include "viewstudents.h"
#include "modifystudent.h"
#include "gradesubmit.h"
#include "secondarymenu.h"
#include "firstmenu.h"
#include "expenses.h"
#include "earnings.h"
#include "budget.h"
#include "Animations.h"

//namespaces
using namespace std;

//defines
#define LIGHT_PURPLE (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY)
#define LIGHT_BLUE  (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY)


//function to open and read files
void openAndReadFile(const string& filename) {
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        cout << "Contents of " << filename << ":" << endl;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cerr << "Unable to open file " << filename << endl;
    }
}
    
    
    
    
    
//main menu function
void mainmenu(){
	int option;
	
	  int choice;
	  
	  //loop
	do{
     
	
	
     //main menu options
     setConsoleColor(LIGHT_PURPLE);
	cout<<"----------------\n";
	cout<<"| ";setConsoleColor(LIGHT_BLUE);cout<<"[+] Options: ";setConsoleColor(LIGHT_PURPLE);cout<<"|\n";
	cout<<"----------------\n\n";
	
	
	cout<<"---------------\n";
    cout<<"| ";setConsoleColor(LIGHT_BLUE);cout<<"1. Students ";setConsoleColor(LIGHT_PURPLE);cout<<"|\n";
    cout<<"---------------\n";
	cout<<"| ";setConsoleColor(LIGHT_BLUE);cout<<"2. Teachers ";setConsoleColor(LIGHT_PURPLE);cout<<"|\n";
	cout<<"---------------\n";
	cout<<"| ";setConsoleColor(LIGHT_BLUE);cout<<"3. Economics";setConsoleColor(LIGHT_PURPLE);cout<<"|\n";
	cout<<"---------------\n";
	cout<<"| ";setConsoleColor(LIGHT_BLUE);cout<<"4. exit     ";setConsoleColor(LIGHT_PURPLE);cout<<"|\n";
	cout<<"---------------\n\n>";
	
	
	setConsoleColor(LIGHT_BLUE);
	cin>>choice;
	
    // main menu logic and functionality
    
   
   if(choice==1){
   	cout<<"\nLoading Student's Menu";
   	for(int i=0; i<5; i++){
   		cout<<".";
   		Sleep(100);
	   }
   	system("cls");//clear screen 
   	firstmenu(); 
   }
   else if(choice==2){
   	cout<<"\nLoading Teacher's Menu";
   	for(int i=0; i<5; i++){
   		cout<<".";
   		Sleep(100);
	   }
   	system("cls");
   	secondarymenu();
   }
  else if (choice == 3) {
  	cout<<"\nLoading Economic's Menu";
   	for(int i=0; i<5; i++){
   		cout<<".";
   		Sleep(100);
	   }

    system("cls"); //clears screen
    int option;
    
     setConsoleColor(LIGHT_PURPLE);
	cout<<"----------------\n";
	cout<<"| ";setConsoleColor(LIGHT_BLUE);cout<<"[+] Options: ";setConsoleColor(LIGHT_PURPLE);cout<<"|\n";
	cout<<"----------------\n\n";
	
	
	cout<<"--------------------\n";
    cout <<"| ";setConsoleColor(LIGHT_BLUE);cout<<"1. Set Budget:  ";setConsoleColor(LIGHT_PURPLE);cout<<"|" << endl;
    cout<<"--------------------\n";
	cout <<"| ";setConsoleColor(LIGHT_BLUE);cout<<"2. Add Expense: ";setConsoleColor(LIGHT_PURPLE);cout<<"|" << endl;
	cout<<"--------------------\n";
	cout <<"| ";setConsoleColor(LIGHT_BLUE);cout<<"3. Add Earnings:";setConsoleColor(LIGHT_PURPLE);cout<<"|"<<endl;
	cout<<"--------------------\n";
	cout <<"| ";setConsoleColor(LIGHT_BLUE);cout<<"4. view:        ";setConsoleColor(LIGHT_PURPLE);cout<<"|"<<endl;
	cout<<"--------------------\n";
	cout <<"| ";setConsoleColor(LIGHT_BLUE);cout<<"5. Exit         ";setConsoleColor(LIGHT_PURPLE);cout<<"|"<<endl;//options
	cout<<"--------------------\n\n>";
	
	
	setConsoleColor(LIGHT_BLUE);
    cin >> option;
    
    
    if (option == 1) {
    	
    	double budgetAmount;
    	setConsoleColor(LIGHT_BLUE);
                cout << "Enter budget amount: $";
                setConsoleColor(LIGHT_PURPLE);
                cin >> budgetAmount;
                
                Budget budget(budgetAmount);
                budget.saveBudgetToFile("budget.txt");
        
    
}
else if (option == 2) {
   
double expenseAmount;
setConsoleColor(LIGHT_BLUE);
                cout << "Enter expense amount: $";
                 setConsoleColor(LIGHT_PURPLE);
                cin >> expenseAmount;
                
                Expenses expenses;
                expenses.addExpense(expenseAmount);
                expenses.saveExpensesToFile("expenses.txt");
    
}
else if (option == 3) {
  
double earningsAmount;
setConsoleColor(LIGHT_BLUE);
                cout << "Enter earnings amount: $";
                setConsoleColor(LIGHT_PURPLE);
                cin >> earningsAmount;
                
                Earnings earnings;
                earnings.addEarning(earningsAmount);
                earnings.saveEarningsToFile("earnings.txt");
    
}
else if (option == 4) {
    
    int choise;
    
    
    cout<<"-------------------\n";
    cout<<"| 1. Open budget  |"<<endl;
    cout<<"-------------------\n";
    cout<<"| 2. Open earnings|"<<endl;
    cout<<"-------------------\n";
    cout<<"| 3. Open expenses|"<<endl;
    cout<<"-------------------\n\n";
    cin>>choise;
    
    switch(choise){
    	case 1:
    		openAndReadFile("budget.txt");
    		break;
    	case 2:
    		openAndReadFile("earnings.txt");
    		break;
    	case 3:
    		openAndReadFile("expenses.txt");
    		break;
    	default:
    		cout<<"invalid choice";
    		break;
	}
}
else if (option == 5) {
    
	
	cout << "\nExiting";;
	for(int i=0; i<6; i++){
		printf(".");
		Sleep(300);
	}
    system("cls");
    
}
else {
	setConsoleColor(FOREGROUND_RED);
    std::cout << "Invalid choice! Please try again." << std::endl;
}

}

   }while(choice!=4);
   
   
}
   

   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
	

