//
// Created by TKisely on 2017. 05. 17..
//

#ifndef COURSESOLVEDEXERCISES_PERSON_H
#define COURSESOLVEDEXERCISES_PERSON_H

#include <string>
#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int birthYear;
public:
    Person(string _name, int _birthYear):name(_name),birthYear(_birthYear){}
    void print()const;
    void setBirthYear(int _birthYear);

};


#endif //COURSESOLVEDEXERCISES_PERSON_H
