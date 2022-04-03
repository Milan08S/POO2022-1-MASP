//
// Created by migue on 02/04/2022.
//

#ifndef EMPLOYEE_BASEPLUSSCOMMISSIONEMPLOYEE_H
#define EMPLOYEE_BASEPLUSSCOMMISSIONEMPLOYEE_H

#include "CommissionEmployee.h"

class BasePlusCommissionEmployee : public CommissionEmployee{
public:
    BasePlusCommissionEmployee( const string &, const string &, const string &, double = 0.0, double = 0.0, double = 0.0 );

    void setBaseSalary( double );
    double getBaseSalary() const;

    virtual double earnings() const;
    virtual void print() const;

private:
    double baseSalary;
};

#endif //EMPLOYEE_BASEPLUSSCOMMISSIONEMPLOYEE_H
