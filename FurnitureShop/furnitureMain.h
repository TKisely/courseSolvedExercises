//
// Created by TKisely on 2017. 05. 16..
//

#ifndef COURSESOLVEDEXERCISES_FURNITUREMAIN_H
#define COURSESOLVEDEXERCISES_FURNITUREMAIN_H

#include <iostream>
#include "Furniture.h"

using namespace MyFurniture;
using namespace std;

class furnitureMain{
public:
    static int callMainFurniture(){
        Furniture *furnitures[3];
        furnitures[0]=new Table(100);
        furnitures[1]=new Bed(200,80);
        furnitures[2]=new Chair(4);
        for (int i = 0; i < 3;++i) {
            furnitures[i]->print();
            cout<<std::endl;
            delete furnitures[i];
        }
        return 0;
    }
};


#endif //COURSESOLVEDEXERCISES_FURNITUREMAIN_H
