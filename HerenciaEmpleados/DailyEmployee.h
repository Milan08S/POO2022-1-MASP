//
// Created by migue on 02/04/2022.
//

#ifndef EMPLOYEE_DAILYEMPLOYEE_H
#define EMPLOYEE_DAILYEMPLOYEE_H
#include "Employee.h"

class DailyEmployee : public Employee{
public:
    DailyEmployee( const string &, const string &, const string &, double = 0.0, double = 0.0 );

    void setDayWage( double ); // set Day Wage
    double getDayWage() const; // get DayWage

    void setWorkedDays( double ); // set Worked Days
    double getWorkedDays() const; // get Worked days

    virtual double  earnings() const;
    virtual void print() const;


private:
    double dayWage;
    double workedDays;
};

#endif //EMPLOYEE_DAILYEMPLOYEE_H
