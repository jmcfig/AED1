//
// Created by up202108829 on 21/10/2022.
//

#include "../headers/UCClass.h"

const string &UCClass::getUcCode() const {
    return ucCode;
}

void UCClass::setUcCode(const string &ucCode) {
    UCClass::ucCode = ucCode;
}

const string &UCClass::getClassCode() const {
    return classCode;
}

void UCClass::setClassCode(const string &classCode) {UCClass::classCode = classCode;}

UCClass::UCClass() {}

UCClass::UCClass(const string &ucCode, const string &classCode) : ucCode(ucCode), classCode(classCode) {}
