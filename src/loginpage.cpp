//system libs
#include <iostream> 
#include <chrono>
#include <thread>
#include <string>  
#include <windows.h>

//custom libs
#include "loginpage.h" 
#include "animatedtext.h" 
#include "gotoxy.h"  
#include "loading.h" 
#include "logo.h"  
#include "Animations.h" 

using namespace std; 


const WORD LIGHT_BLUE = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY;


//validation logic function
bool validateLogin(const string& username, const string& password) {
	
    // valid credentials
    return (username == "admin" && password == "root");
}









//login page display function
void loginpage() {
	
	
    string username, password;
    
    setConsoleFontSize(30);
    
    // login page txt display
    setConsoleColor(LIGHT_BLUE);
    cout<<endl<<"\t\t\t\t\t     ========================================================"<<endl;
    animateText("\t\t\t\t\t     *************  SchoolMaster Login Page  ****************\n", 40);
    cout<<"\t\t\t\t\t     ========================================================\n\n";
    
	


    	
    	
    cout << endl << endl;
    
    cout << "\t\t\t\t\t     Please Enter your credentials to continue:\n\n\n "<< endl;
    
    do {
    	
        // username input
        cout << "\t\t\t\t\t     Username: ";
        setConsoleColor(FOREGROUND_GREEN);
        cin >> username;

        // password input
        setConsoleColor(LIGHT_BLUE);
        cout << "\t\t\t\t\t     Password: ";
        setConsoleColor(FOREGROUND_GREEN);
        cin >> password;
        
        
        // check credentials
        if (validateLogin(username, password)) {
        	setConsoleColor(LIGHT_BLUE);
            cout<<endl<< "\t\t\t\t\t     Login ";setConsoleColor(FOREGROUND_GREEN);cout<<"successful. ";setConsoleColor(LIGHT_BLUE);cout<<"Welcome ";setConsoleColor(FOREGROUND_GREEN);cout << username;setConsoleColor(LIGHT_BLUE);cout<<"!" << endl;
            loadinganimation();
            system("cls");
              std::cout << "Loading system Utilities ";
    for (int i = 0; i < 3; ++i) {
        std::cout << ".";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
    std::cout << std::endl;
    system("cls");

    std::cout << "Initializing Components ";
    for (int i = 0; i < 5; ++i) {
        std::cout << ".";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(400));
    }
    std::cout << std::endl;
system("cls");
    std::cout << "Setting Up Environment ";
    for (int i = 0; i < 4; ++i) {
        std::cout << ".";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(600));
    }
    std::cout << std::endl;
  system("cls");
    
    cout<<"Program Status : ";setConsoleColor(FOREGROUND_GREEN | FOREGROUND_INTENSITY);cout<<"Ready"<<endl<<endl;setConsoleColor(LIGHT_BLUE);

    std::cout << "Press ";setConsoleColor(FOREGROUND_GREEN | FOREGROUND_INTENSITY);cout<<"Enter ";setConsoleColor(LIGHT_BLUE);cout<<"to Launch SchoolMaster: ";
    cin.clear();
    cin.ignore();
    std::cin.get();  // Wait for the user to press Enter


          
             system("cls");
            // Proceed.........
            
            break;
            
        } else {
        	setConsoleColor(FOREGROUND_RED);
            cout << "\t\t\t\t\t     Invalid Credentials(!)" << endl;
           setConsoleColor(LIGHT_BLUE);
		    // wrong credentials option
        }
    } while (true);
}


