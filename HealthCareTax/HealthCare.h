//
// Created by TKisely on 2017. 05. 17..
//

#ifndef COURSESOLVEDEXERCISES_HEALTHCARE_H
#define COURSESOLVEDEXERCISES_HEALTHCARE_H

#include "IInsured.h"

class HealthCare {
public:
    static bool isInsuranceForTreatment(const IInsured& _insured, unsigned _amount);
    static void chargeTreatment(IInsured& _insured, unsigned _amount);
};


#endif //COURSESOLVEDEXERCISES_HEALTHCARE_H
