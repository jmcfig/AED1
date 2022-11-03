//
// Created by up202108829 on 21/10/2022.
//
#ifndef UNTITLED_CLASSSCH_H
#define UNTITLED_CLASSSCH_H


#include <string>
#include <list>
#include "Slot.h"
#include "UCClass.h"

using namespace std;



class ClassSch {



public:



    ClassSch(const UCClass &ucClass, const vector<Slot*> &schedule);

    const UCClass &getUcClass() const;

    void setUcClass(const UCClass &ucClass);




private:
    UCClass ucClass_;
    vector<Slot*> schedule_;

};


#endif //UNTITLED_CLASSSCH_H



