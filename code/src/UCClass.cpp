//
// Created by up202108829 on 21/10/2022.
//

#include "../headers/UCClass.h"

const string &UCClass::getUcCode() const {
    return ucCode_;
}

void UCClass::setUcCode(const string &ucCode) {
    UCClass::ucCode_ = ucCode;
}

const string &UCClass::getClassCode() const {
    return classCode_;
}

void UCClass::setClassCode(const string &classCode) {UCClass::classCode_ = classCode;}



UCClass::UCClass(const string &ucCode, const string &classCode) : ucCode_(ucCode), classCode_(classCode) {}
