#include "EmployeReport.h"
#include <iostream>
#include <iomanip>

void EmployeReport::print() const {
    std::cout << "Full name: " << fullName << "\n"
    << "Rank: " << rank << "\n"
    << "Station: " << stationNumber << "\n"
    << "Air temperature: " << airTemperature << "\n"
    << "Wind speed: " << windSpeed << "\n"
    << "Threats eliminated: " << threatsEliminated << "\n"
    << "Date: " << std::put_time(&reportDate, "%Y-%m-%d") << "\n"
    << "Report time in seconds: " << reportTimeSeconds << "c\n";
}
