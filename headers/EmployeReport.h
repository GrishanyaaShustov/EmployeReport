#ifndef EMPLOYEREPORT_H
#define EMPLOYEREPORT_H

#include <string>
#include <ctime>

struct EmployeReport {

    unsigned int stationNumber; // Номер станции
    std::string firstName; // Имя сотрудника
    std::string lastName; // Фамилия сотрудника
    std::string rank; // Ранг сотрудника
    float airTemperature; // Температура воздуха (цельсии)
    float windSpeed; // Скорость ветра (метры в сек)
    unsigned int threatsEliminated; // Количество устраненных угроз
    std::tm reportDate; // Дата отчета
    unsigned int reportTimeSeconds; // Время отправки отчета в секундах от начала суток

    void print() const;

};

#endif //EMPLOYEREPORT_H