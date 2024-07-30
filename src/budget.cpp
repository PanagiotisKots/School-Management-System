// System libraries
#include <iostream>
#include <fstream>   // For file input/output operations

// Custom library
#include "budget.h"  
#include "Animations.h"

#define LIGHT_PURPLE (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY)
#define LIGHT_BLUE  (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY)

// Constructor for Budget class
Budget::Budget(double amount) : budgetAmount(amount) {}

// Function to get the budget amount
double Budget::getBudgetAmount() const {
    return budgetAmount;
}

// Function to save the budget to a file
void Budget::saveBudgetToFile(const std::string& filename) const {
    std::ofstream file(filename);  // Open file for writing
    if (file.is_open()) {  // Check if file is successfully opened
    	setConsoleColor(LIGHT_BLUE);
        file << "Budget Amount: $";	setConsoleColor(LIGHT_PURPLE);cout << budgetAmount << std::endl;  // Write budget amount to file
        file.close();  // Close the file
        setConsoleColor(LIGHT_BLUE);
        std::cout << "Budget saved to ";setConsoleColor(LIGHT_PURPLE);cout << filename << std::endl;  // Print message indicating successful save
    } else {
    	setConsoleColor(FOREGROUND_RED);
        std::cerr << "Unable to open file " << filename << std::endl;  // Print error message if file cannot be opened
    }
}

