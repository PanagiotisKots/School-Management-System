// ExpenseTracker.h
#ifndef EXPENSESTRACKER_H
#define EXPENSESTRACKER_H

#include <vector>
#include <string>
#include <fstream>
#include <iostream>

struct Expense {
    std::string date;
    std::string category;
    std::string description;
    double amount;
};

class ExpenseTracker {
public:
    std::vector<Expense> expenses;

public:
    void addExpense(const std::string& date, const std::string& category, const std::string& description, double amount);
    void displayExpenses();
    void saveExpensesToFile(const std::string& filename);
    void loadExpensesFromFile(const std::string& filename);
};

#endif // EXPENSESTRACKER_H
