//
// Created by TKisely on 2017. 05. 16..
//

#ifndef COURSESOLVEDEXERCISES_BEAR_H
#define COURSESOLVEDEXERCISES_BEAR_H

#include<iostream>

namespace Shelter{

class Bear {
protected:
    static const double basePrice;
    unsigned Days;

public:
    Bear(unsigned d){
        Days=d;
    }

    virtual double getCost()const=0;
    virtual void print()const=0;
};

class Grizzly: public Bear{
    static const double grizzlyFactor;
public:
    Grizzly(unsigned d):Bear(d){}

    double getCost() const{
        return Days*basePrice*grizzlyFactor;
    }

    void print() const{
        std::cout<<"Feeding a grizzly for "<<Days
                 <<"days will cost $"<<getCost()<<std::endl;
    }
};

class Panda:public Bear{
    static const double pandaFactor;
public:
    Panda(unsigned d):Bear(d){}

    double getCost() const{
        return Days*basePrice*pandaFactor;
    }

    void print()const{
        std::cout<<"Feeding a panda for "<<Days
                 <<"days will cost $"<<getCost()<<std::endl;
    }
};

class PolarBear:public Bear {
    static const double polarBearFactor;
public:
    PolarBear(unsigned d) : Bear(d) {}

    double getCost() const {
        return Days * basePrice * polarBearFactor;
    }

    void print() const {
        std::cout << "Feeding a polar bear for " << Days
                  << "days will cost $" << getCost() << std::endl;
    }
};
};

#endif //COURSESOLVEDEXERCISES_BEAR_H
