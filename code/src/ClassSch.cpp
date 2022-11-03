#include <string>
#include <list>
#include "../headers/ClassSch.h"
#include "../src/UCClass.cpp"

//
// Created by up202108829 on 21/10/2022.
//





ClassSch::ClassSch(const UCClass &ucClass, const vector<Slot*> &schedule) : ucClass_(ucClass),
                                                                                schedule_(schedule) {}

const UCClass &ClassSch::getUcClass() const {
    return ucClass_;
}

void ClassSch::setUcClass(const UCClass &ucClass) {
    ucClass_ = ucClass;
}





