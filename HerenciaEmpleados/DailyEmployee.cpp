//
// Created by migue on 02/04/2022.
//

#include "DailyEmployee.h"

DailyEmployee::DailyEmployee(const string &first, const string &last, const string &ssn, double salary, double workedDay) : Employee( first, last, ssn){
    setDayWage( salary );
    setWorkedDays( workedDay );
}

void DailyEmployee::setWorkedDays( double workedDay ) {
    workedDays = ( workedDay < 0.0 ) ? 0.0 : workedDay;
}

double DailyEmployee::getWorkedDays() const {
    return workedDays;
}

void DailyEmployee::setDayWage( double salary ) {
    dayWage = ( salary < 0.0 ) ? 0.0 : salary;
}

double DailyEmployee::getDayWage() const {
    return dayWage;
}

double DailyEmployee::earnings() const {
    return getDayWage()*getWorkedDays();
}

void DailyEmployee::print() const {
    cout << "Daily Employee: ";
    Employee::print();
    cout << "\nDaily wage: " << getDayWage() << " Worked Days: " << getWorkedDays() << " Total Salary: " << earnings();
}