//
// Created by TKisely on 2017. 05. 17..
//

#ifndef COURSESOLVEDEXERCISES_IINSURED_H
#define COURSESOLVEDEXERCISES_IINSURED_H
class IInsured{
public:
    virtual unsigned getInsuranceBalance()const=0;
    virtual bool isValidInsurance()const=0;
    virtual void decreaseInsuranceBalance(unsigned)=0;
};
#endif //COURSESOLVEDEXERCISES_IINSURED_H
