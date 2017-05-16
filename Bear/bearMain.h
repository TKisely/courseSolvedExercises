//
// Created by TKisely on 2017. 05. 16..
//

#ifndef COURSESOLVEDEXERCISES_BEARMAIN_H
#define COURSESOLVEDEXERCISES_BEARMAIN_H

#include <iostream>
#include "Bear.h"
using namespace std;
using namespace Shelter;
class bearMain{
public:
    static int callBearMain(){
    Bear *bears[3];
    bears[0]=new Grizzly(22);
    bears[1]=new Panda(51);
    bears[2]=new PolarBear(43);

    for (int i = 0; i < 3; ++i) {
        bears[i]->print();
        delete bears[i];
    }
    return 0;
}};

#endif //COURSESOLVEDEXERCISES_BEARMAIN_H
