#ifndef EMPLOYEREPORT_H
#define EMPLOYEREPORT_H

#include <string>
#include <ctime>

struct EmployeReport {

    std::string fullName; // ФИО сотрудника
    std::string rank; // Ранг сотрудника
    int stationNumber; // Номер станции
    float airTemperature; // Температура воздуха (цельсии)
    float windSpeed; // Скорость ветра (метры в сек)
    int threatsEliminated; // Количество устраненных угроз
    std::tm reportDate; // Дата отчета
    int reportTimeSeconds; // Время отправки отчета в секундах от начала суток

    void print() const;


};

#endif //EMPLOYEREPORT_H