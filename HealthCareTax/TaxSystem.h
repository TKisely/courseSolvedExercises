//
// Created by TKisely on 2017. 05. 17..
//

#ifndef COURSESOLVEDEXERCISES_TAXSYSTEM_H
#define COURSESOLVEDEXERCISES_TAXSYSTEM_H

#include "ITaxPayer.h"

class TaxSystem {
    unsigned tax;
public:
    TaxSystem():tax(0){}
    void payTax(const ITaxPayer& _taxPayer);
};


#endif //COURSESOLVEDEXERCISES_TAXSYSTEM_H
