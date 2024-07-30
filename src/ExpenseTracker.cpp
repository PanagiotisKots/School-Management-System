// ExpenseTracker.cpp
#include <iostream>
#include "ExpenseTracker.h"
#include <sstream>

void ExpenseTracker::addExpense(const std::string& date, const std::string& category, const std::string& description, double amount) {
    Expense newExpense = {date, category, description, amount};
    expenses.push_back(newExpense);
}

void ExpenseTracker::displayExpenses() {
    std::cout << "Date\t\tCategory\tDescription\tAmount" << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    for (const auto& expense : expenses) {
        std::cout << expense.date << "\t" << expense.category << "\t\t" << expense.description << "\t\t" << expense.amount << std::endl << std::endl;
    }
    std::cout << "-------------------------------------------------------" << std::endl;
}

void ExpenseTracker::saveExpensesToFile(const std::string& filename) {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        for (const auto& expense : expenses) {
            outFile << expense.date << "," << expense.category << "," << expense.description << "," << expense.amount << "\n";
        }
        outFile.close();
    } else {
        std::cerr << "Unable to open file: " << filename << std::endl;
    }
}

void ExpenseTracker::loadExpensesFromFile(const std::string& filename) {
    std::ifstream inFile(filename);
    if (!inFile.is_open()) {
        // File does not exist, create it
        std::ofstream outFile(filename);
        outFile.close();
        return;
    }

    // File exists, proceed with loading expenses
    expenses.clear(); // Clear existing expenses
    std::string line;
    while (std::getline(inFile, line)) {
        std::istringstream iss(line);
        std::string date, category, description;
        double amount;
        char delimiter;
        if (iss >> date >> delimiter >> category >> delimiter >> description >> delimiter >> amount) {
            addExpense(date, category, description, amount);
        }
    }
    inFile.close();
}
