//
// Created by TKisely on 2017. 05. 16..
//

#ifndef COURSESOLVEDEXERCISES_FURNITURE_H
#define COURSESOLVEDEXERCISES_FURNITURE_H

#include <iostream>

namespace MyFurniture {

    class Furniture {
    protected:
        static double const basePrice;
        unsigned ID;
        static unsigned lastID;
    public:
        Furniture(){ID=lastID++;}
        virtual void print() const =0;
        virtual double getPrice()const=0;

    };

    class Table:public Furniture{
        static double const tableFactor;
        unsigned height;
    public:
        Table(unsigned _height)
                :Furniture(),height(_height){}
        double getPrice()const{
            return basePrice*tableFactor;
        }

        void print()const{
            std::cout<<"Price is: "<<getPrice()<<" and the height is: "<<height;
        }
    };

    class Bed:public Furniture{
        static double const bedFactor;
        unsigned length;
        unsigned width;
    public:
        Bed(unsigned _length, unsigned _width)
                :Furniture(),length(_length),width(_width){}
        double getPrice()const{
            return basePrice*bedFactor;
        }

        void print()const{
            std::cout<<"Price is: "<<getPrice()<<" and the length and width are: "<<length<<" "<<width;
        }
    };

    class Chair:public Furniture{
        static double const chairFactor;
        unsigned legNum;
    public:
        Chair(unsigned _legNum):Furniture(),legNum(_legNum){}

        double getPrice()const{
            return basePrice*chairFactor;
        }

        void print()const{
            std::cout<<"Price is: "<<getPrice()<<" and the number of legs is: "<<legNum;
        }
    };

}

#endif //COURSESOLVEDEXERCISES_FURNITURE_H
