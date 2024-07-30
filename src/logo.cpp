//system librariues
#include<iostream>
#include<windows.h>



//custom libs
#include "logo.h"
#include"help.h"
#include "Animations.h"


//namespaces
using namespace std;

//defines
#define LIGHT_PURPLE (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY)
#define LIGHT_BLUE  (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY)


//logo display function
void logo(){

setConsoleColor(LIGHT_BLUE);
cout<<"[Welcome to SchoolMaster]\n";

setConsoleColor(LIGHT_PURPLE);
cout<<"-----------------------------------------------------------------------------------\n";
cout<<"| [+] ";setConsoleColor(LIGHT_BLUE);cout<<"An advanced Scool management system where you can Unlock the full potential ";setConsoleColor(LIGHT_PURPLE);cout<<"|\n|";setConsoleColor(LIGHT_BLUE);cout<<"  of your educational institution with our streamlined S/M/S.                    ";setConsoleColor(LIGHT_PURPLE);cout<<"|\n";
setConsoleColor(LIGHT_PURPLE);
cout<<"-----------------------------------------------------------------------------------\n";
cout<<"| [+] ";setConsoleColor(LIGHT_BLUE);cout<<"From seamless administration to personalized learning experiences,          ";setConsoleColor(LIGHT_PURPLE);cout<<"|\n|";setConsoleColor(LIGHT_BLUE);cout<<"  empower your staff and students.                                               ";setConsoleColor(LIGHT_PURPLE);cout<<"|\n";
setConsoleColor(LIGHT_PURPLE);
cout<<"-----------------------------------------------------------------------------------\n";
cout<<"| [+] ";setConsoleColor(LIGHT_BLUE);cout<<"Tthrive in a dynamic academic environment. Join the wave of                 ";setConsoleColor(LIGHT_PURPLE);cout<<"|\n|  ";setConsoleColor(LIGHT_BLUE);cout<<"innovation and elevate your institution today.                                 ";setConsoleColor(LIGHT_PURPLE);cout<<"|\n";
cout<<"-----------------------------------------------------------------------------------\n\n"; 

//logo display
setConsoleFontSize(30);

    std::cout << "=======================";setConsoleColor(LIGHT_BLUE);cout<<"=========================================\n";setConsoleColor(LIGHT_PURPLE);
    std::cout << " ____       _                ";setConsoleColor(LIGHT_BLUE);cout<<" _   __  __           _            \n";setConsoleColor(LIGHT_PURPLE);
    std::cout << "/ ___|  ___| |__   ___   ___ | ";setConsoleColor(LIGHT_BLUE);cout<<"| |  \\/  | __ _ ___| |_ ___ _ __\n";setConsoleColor(LIGHT_PURPLE);
    std::cout << "\\___ \\ / __| '_ \\ / _ \\ / _ \"";setConsoleColor(LIGHT_BLUE);cout<<"\| | | |\\/| |/ _` / __| __/ _ \\ '__|\n";setConsoleColor(LIGHT_PURPLE);
    std::cout << " ___) | (__| | | | (_) | (_) | | | |";setConsoleColor(LIGHT_BLUE);cout<<"  | | (_| \\__ \\ ||  __/ |\n";setConsoleColor(LIGHT_PURPLE);
    std::cout << "|____/ \\___|_| |_|\\___/ \\___/|_| |";setConsoleColor(LIGHT_BLUE);cout<<" _|  |_|\\__,_|___/\\__\\___|_|\n";setConsoleColor(LIGHT_PURPLE);
    std::cout << "=======================================";setConsoleColor(LIGHT_BLUE);cout<<"=========================\n";setConsoleColor(LIGHT_PURPLE);





cout<<"[+] ";setConsoleColor(LIGHT_BLUE);cout<<"Created by: {Kotsorgios Panagiotis}"<<endl;setConsoleColor(LIGHT_PURPLE);
cout<<"[+] ";setConsoleColor(LIGHT_BLUE);cout<<"Version -V 0.1"<<endl;setConsoleColor(LIGHT_PURPLE);
cout<<"[+] ";setConsoleColor(LIGHT_BLUE);cout<<"Developed in C++"<<endl<<endl;

 
helpaboutprogram();//callingt the helpaboutprogram function



}



	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
