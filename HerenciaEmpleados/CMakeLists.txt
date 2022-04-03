cmake_minimum_required(VERSION 3.21)
project(Employee)

set(CMAKE_CXX_STANDARD 14)

add_executable( Employee.h Employee.cpp SalariedEmployee.h SalariedEmployee.cpp HourlyEmployee.h HourlyEmployee.cpp CommissionEmployee.h CommissionEmployee.cpp BasePlusCommissionEmployee.cpp BasePlussCommissionEmployee.h DailyEmployee.h DailyEmployee.cpp main.cpp )
