//
// Created by TKisely on 2017. 05. 17..
//

#include <assert.h>
#include "Employee.h"

void Employee::setEmploymentYear(unsigned _employmentYear) {
    this->employmentYear=_employmentYear;
}

void Employee::print() {
    Person::print();
    cout<<"  "<<employmentYear<<endl;
}

void Employee::setSalary(unsigned _salary) {
    this->salary=_salary;
}

void Employee::addInsuranceBalance(unsigned _add) {
    this->insuranceBalance+=_add;

}

unsigned Employee::getIncome() const {
    return salary*12;
}

unsigned Employee::taxReduction() const {
    return 0;
}

unsigned Employee::getInsuranceBalance() const {
    return insuranceBalance;
}

bool Employee::isValidInsurance() const {
    if(insuranceBalance)return true;
    return false;
}

void Employee::decreaseInsuranceBalance(unsigned _amount) {
    if(insuranceBalance>=_amount){
        insuranceBalance-=_amount;
    } else
        assert(0);
}

