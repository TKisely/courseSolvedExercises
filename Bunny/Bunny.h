//
// Created by TKisely on 2017. 05. 16..
//

#ifndef COURSESOLVEDEXERCISES_BUNNY_H
#define COURSESOLVEDEXERCISES_BUNNY_H

#include <iostream>

namespace EasterBunny{

    class Present{
    protected:
        static const double basePrice;
        unsigned Quantity;
    public:
        Present(unsigned _quantity){
            Quantity=_quantity;
        }
        virtual double getPrice()const=0;
        virtual void print()const=0;
    };

    class Egg:public Present{
        static const double eggFactor;
    public:
        Egg(unsigned _quantity):Present(_quantity){}
        double getPrice()const{
            return Quantity*basePrice*eggFactor;
        }
        void print()const{
            std::cout<<"The price of the egg package is $"
                     <<getPrice()<<std::endl;
        }
    };

    class Chocolate:public Present{
        static const double chocolateFactor;
    public:
        Chocolate(unsigned _quantity):Present(_quantity){}
        double getPrice()const{
            return Quantity*basePrice*chocolateFactor;
        }
        void print()const{
            std::cout<<"The price of the chocolate package is $"
                     <<getPrice()<<std::endl;
        }
    };

    class Candy:public Present{
        static const double candyFactor;
    public:
        Candy(unsigned _quantity):Present(_quantity){}
        double getPrice()const{
            return Quantity*basePrice*candyFactor;
        }
        void print()const{
            std::cout<<"The price of the candypackage is $"
                     <<getPrice()<<std::endl;
        }
    };


}



#endif //COURSESOLVEDEXERCISES_BUNNY_H
