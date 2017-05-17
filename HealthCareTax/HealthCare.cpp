//
// Created by TKisely on 2017. 05. 17..
//

#include <assert.h>
#include "HealthCare.h"

bool HealthCare::isInsuranceForTreatment(const IInsured &_insured, unsigned _amount){
    if(_insured.isValidInsurance()
       &&_insured.getInsuranceBalance()>=_amount){
        return true;
    }
    return false;
}

void HealthCare::chargeTreatment(IInsured &_insured, unsigned _amount) {
    if(isInsuranceForTreatment(_insured,_amount)){
        _insured.decreaseInsuranceBalance(_amount);
    }else{
        assert(0);
    }

}
