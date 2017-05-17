//
// Created by TKisely on 2017. 05. 17..
//

#include "Person.h"

void Person::print() const {
    cout<<name<<"  "<<birthYear<<endl;
}

void Person::setBirthYear(int _birthYear) {
    this->birthYear=_birthYear;
}
