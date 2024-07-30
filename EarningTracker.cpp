// EarningTracker.cpp
#include <iostream>
#include "EarningTracker.h"
#include <sstream>

void EarningTracker::addEarning(const std::string& date, const std::string& category, const std::string& description, double amount) {
    Earning newEarning = {date, category, description, amount};
    earnings.push_back(newEarning);
}

void EarningTracker::displayEarnings() {
    std::cout << "Date\t\tCategory\tDescription\tAmount" << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    for (const auto& earning : earnings) {
        std::cout << earning.date << "\t" << earning.category << "\t\t" << earning.description << "\t\t" << earning.amount << std::endl << std::endl;
    }
    std::cout << "-------------------------------------------------------" << std::endl;
}

void EarningTracker::saveEarningsToFile(const std::string& filename) {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        for (const auto& earning : earnings) {
            outFile << earning.date << "," << earning.category << "," << earning.description << "," << earning.amount << "\n";
        }
        outFile.close();
    } else {
        std::cerr << "Unable to open file: " << filename << std::endl;
    }
}

void EarningTracker::loadEarningsFromFile(const std::string& filename) {
    std::ifstream inFile(filename);
    if (!inFile.is_open()) {
        // File does not exist, create it
        std::ofstream outFile(filename);
        outFile.close();
        return;
    }

    // File exists, proceed with loading earnings
    earnings.clear(); // Clear existing earnings
    std::string line;
    while (std::getline(inFile, line)) {
        std::istringstream iss(line);
        std::string date, category, description;
        double amount;
        char delimiter;
        if (iss >> date >> delimiter >> category >> delimiter >> description >> delimiter >> amount) {
            addEarning(date, category, description, amount);
        }
    }
    inFile.close();
}
