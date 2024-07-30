//standard libraries
#include <iostream>
#include <stdio.h>


//custom libraries
#include "logo.h"
#include "gotoxy.h"
#include "loading.h"
#include "mainmenu.h"
#include "loginpage.h" 


//namespaces
using namespace std;







//main function
int main(int argc, char** argv) {
	
	
	loginpage();//login page functions from loginpage.cpp file
	
	 
    logo();//logo display and starting menu 
    
    
    return 0;
    
}


