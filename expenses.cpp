//systems
#include <iostream>
#include <fstream>

//custom lib
#include "expenses.h"
#include "Animations.h"


#define LIGHT_PURPLE (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY)
#define LIGHT_BLUE  (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY)

using namespace std;
Expenses::Expenses() : totalExpenses(0.0) {}

void Expenses::addExpense(double amount) {
    totalExpenses += amount;
}

double Expenses::getTotalExpenses() const {
    return totalExpenses;
}

void Expenses::saveExpensesToFile(const std::string& filename) const {
    std::ofstream file(filename);
    if (file.is_open()) {
    	setConsoleColor(LIGHT_BLUE);
        file << "Total Expenses: $" ;setConsoleColor(LIGHT_PURPLE);cout<< totalExpenses << std::endl;
        file.close();
       	setConsoleColor(LIGHT_BLUE); 
        std::cout << "Expenses saved to " ;setConsoleColor(LIGHT_PURPLE);cout<< filename << std::endl;
    } else {
    		setConsoleColor(FOREGROUND_RED);
        std::cerr << "Unable to open file " << filename << std::endl;
    }
}

