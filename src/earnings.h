#ifndef EARNINGS_H
#define EARNINGS_H

#include <string>

using namespace std;

class Earnings {
private:
    double totalEarnings;
public:
    Earnings();
    void addEarning(double amount);
    double getTotalEarnings() const;
    void saveEarningsToFile(const string& filename) const;
};

#endif

