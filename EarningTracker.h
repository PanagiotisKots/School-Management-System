// EarningTracker.h
#ifndef EARNINGSTRACKER_H
#define EARNINGSTRACKER_H

#include <vector>
#include <string>
#include <fstream>
#include <iostream>

struct Earning {
    std::string date;
    std::string category;
    std::string description;
    double amount;
};

class EarningTracker {
public:
    std::vector<Earning> earnings;

public:
    void addEarning(const std::string& date, const std::string& category, const std::string& description, double amount);
    void displayEarnings();
    void saveEarningsToFile(const std::string& filename);
    void loadEarningsFromFile(const std::string& filename);
};

#endif // EARNINGSTRACKER_H
