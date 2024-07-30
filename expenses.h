#ifndef EXPENSES_H
#define EXPENSES_H

#include <string>

class Expenses {
private:
    double totalExpenses;
public:
    Expenses();
    void addExpense(double amount);
    double getTotalExpenses() const;
    void saveExpensesToFile(const std::string& filename) const;
};

#endif 

