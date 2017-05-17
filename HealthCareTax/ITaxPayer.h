//
// Created by TKisely on 2017. 05. 17..
//

#ifndef COURSESOLVEDEXERCISES_ITAXPAYER_H
#define COURSESOLVEDEXERCISES_ITAXPAYER_H
class ITaxPayer{
public:
    virtual unsigned getIncome()const=0;
    virtual unsigned taxReduction()const =0;
};
#endif //COURSESOLVEDEXERCISES_ITAXPAYER_H
