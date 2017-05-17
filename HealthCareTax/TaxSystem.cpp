//
// Created by TKisely on 2017. 05. 17..
//

#include "TaxSystem.h"

void TaxSystem::payTax(const ITaxPayer &_taxPayer) {
    tax+=_taxPayer.getIncome()*0.2-_taxPayer.taxReduction();
}
