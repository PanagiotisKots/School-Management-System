#ifndef FORECASTING_H
#define FORECASTING_H

#include <vector>

class Forecasting {
public:
    void generateForecast(const std::vector<double>& expenses, const std::vector<double>& earnings);
};

#endif // FORECASTING_H

