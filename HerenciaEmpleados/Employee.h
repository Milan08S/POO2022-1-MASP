//
// Created by migue on 31/03/2022.
//

#ifndef EMPLOYEE_EMPLOYEE_H
#define EMPLOYEE_EMPLOYEE_H

#include <string>
#include <iostream>

using namespace std;

class Employee{ /*Clase abstracta*/
public:
    Employee( const string &, const string &, const string &);

    void setFirstName( const string & ); // set first name
    string getFirstName() const; // return first name

    void setLastName( const string & ); // set last name
    string getLastName() const; // return last name

    void setSocialSecurityNumber( const string & );
    string getSocialSecurityNumber() const;

    //Funciones virtuales
    virtual double earnings() const = 0; //virtual pura
    virtual void print() const; //virtual\

private:
    string firstName;
    string lastName;
    string socialSecurityNumber;

};

#endif //EMPLOYEE_EMPLOYEE_H
