// System libraries
#include <iostream>  
#include <fstream>   // For file input/output operations

// Custom library
#include "earnings.h"  
#include "Animations.h"


#define LIGHT_PURPLE (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY)
#define LIGHT_BLUE  (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY)

using namespace std;

// Constructor for Earnings class
Earnings::Earnings() : totalEarnings(0.0) {}



// Function to add earning amount to total earnings
void Earnings::addEarning(double amount) {
    totalEarnings += amount;
}



// Function to get the total earnings
double Earnings::getTotalEarnings() const {
    return totalEarnings;
}

// Function to save earnings to a file
void Earnings::saveEarningsToFile(const string& filename) const {
    ofstream file(filename);  // Open file for writing
    if (file.is_open()) {  // Check if file is successfully opened
    setConsoleColor(LIGHT_BLUE);
        file << "Total Earnings: $" ;setConsoleColor(LIGHT_PURPLE);cout<< totalEarnings << endl;  // Write total earnings to file
        file.close();  // Close the file
        setConsoleColor(LIGHT_BLUE);
        cout << "Earnings saved to ";setConsoleColor(LIGHT_PURPLE);cout << filename << endl;  // Print message indicating successful save
    } else {
    	setConsoleColor(FOREGROUND_RED);
        cerr << "Unable to open file " << filename << endl;  // Print error message if file cannot be opened
    }
}

