//
// Created by TKisely on 2017. 05. 17..
//

#ifndef COURSESOLVEDEXERCISES_EMPLOYEE_H
#define COURSESOLVEDEXERCISES_EMPLOYEE_H


#include "Person.h"
#include "ITaxPayer.h"
#include "IInsured.h"

class Employee: public Person, public ITaxPayer, public IInsured {
    unsigned employmentYear;
    unsigned salary;
    unsigned insuranceBalance;
public:
    Employee(string _name, int _birthYear, int _employmentYear)
            :Person(_name,_birthYear),employmentYear(_employmentYear),insuranceBalance(0){}

    virtual unsigned getIncome()const;
    unsigned taxReduction()const;
    unsigned getInsuranceBalance()const;
    bool isValidInsurance()const;
    void decreaseInsuranceBalance(unsigned _amount);

    void setEmploymentYear(unsigned _employmentYear);
    void setSalary(unsigned _salary);
    void addInsuranceBalance(unsigned _add);
    void print();
};


#endif //COURSESOLVEDEXERCISES_EMPLOYEE_H
