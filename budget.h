#ifndef BUDGET_H
#define BUDGET_H

#include <string>

using namespace std;

class Budget {
private:
    double budgetAmount;
public:
    Budget(double amount);
    double getBudgetAmount() const;
    void saveBudgetToFile(const string& filename) const;
};

#endif 

