#include "Forecasting.h"
#include <iostream>

void Forecasting::generateForecast(const std::vector<double>& expenses, const std::vector<double>& earnings) {
    std::cout << "Historical Expenses:" << std::endl;
    for (const auto& expense : expenses) {
        std::cout << expense << " ";
    }
    std::cout << std::endl;

    std::cout << "Historical Earnings:" << std::endl;
    for (const auto& earning : earnings) {
        std::cout << earning << " ";
    }
    std::cout << std::endl;
}

