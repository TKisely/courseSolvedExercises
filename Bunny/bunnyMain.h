//
// Created by TKisely on 2017. 05. 16..
//

#ifndef COURSESOLVEDEXERCISES_BUNNYMAIN_H
#define COURSESOLVEDEXERCISES_BUNNYMAIN_H

#include <iostream>
#include "Bunny.h"
using namespace std;
using namespace EasterBunny;

class bunnyMain{
public :
    static int callBunnyMain(){
        Present *presents[3];
        presents[0]=new Egg(5);
        presents[1]=new Chocolate(12);
        presents[2]=new Candy(7);

        for (int i = 0; i < 3; ++i) {
            presents[i]->print();
            delete presents[i];
        }
        return 0;
    }
};
#endif //COURSESOLVEDEXERCISES_BUNNYMAIN_H
