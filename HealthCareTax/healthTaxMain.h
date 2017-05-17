//
// Created by TKisely on 2017. 05. 17..
//

#ifndef COURSESOLVEDEXERCISES_HEALTHTAXMAIN_H
#define COURSESOLVEDEXERCISES_HEALTHTAXMAIN_H

#include "Employee.h"
#include "TaxSystem.h"
#include "HealthCare.h"
class healthTaxMain{
public:
    static int callHealthTaxMain(){
        Employee employee("Bill Small", 1970, 1990);
        employee.setSalary(250000);
        employee.addInsuranceBalance(1000000);

        TaxSystem taxSystem;
        taxSystem.payTax(employee);

        cout<<employee.getInsuranceBalance()<<endl;

        if(HealthCare::isInsuranceForTreatment(employee,15000)){
            HealthCare::chargeTreatment(employee,15000);
        } else
            cout<<"not enough money"<<endl;

        cout<<employee.getInsuranceBalance()<<endl;
        return 0;
    }
};
#endif //COURSESOLVEDEXERCISES_HEALTHTAXMAIN_H
